/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@sutdent.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:48:18 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/09 08:48:18 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include <stdio.h>

int	ft_is_sort(t_stack *a)
{
	int	i;

	i = -1;
	while (++i < a->size_max - 1)
	{
		if (a->data[i] > a->data[i + 1])
			return (0);
	}
	return (1);

}

void	ft_checker(t_stack *a, t_stack *b)
{
	char	*str;
	int		arg;

	arg = 0;
	str = get_next_line(1);
	while (str[0] != '\n')
	{
		arg++;
		if_forest(str, a, b);
		str = get_next_line(1);
	}
	free(str);
	if (ft_is_sort(a) == 1)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
	printf("arg = %d\n", arg);
}



int	main(int c, char **v)
{
	t_stack	a;
	t_stack	b;
	t_stack	init;

	if (c == 1)
		return (0);
	if (c == 2)
		v = ft_split_arg(v, &init, &a, &b);
	else if (c > 2)
	{
		init.size_max = c - 1;
		ft_nonsplit(v, &init, &a, &b);
	}
	if (ft_arr_sorted(a) && ft_arr_ready(a))
		return (free_stacks(&a, &b), 0);
	ft_checker(&a, &b);
	if (c == 2)
		ft_free_data(v);
	return (free_stacks(&a, &b), 0);
}

