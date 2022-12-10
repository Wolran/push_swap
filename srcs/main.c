/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:10:18 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/06 19:41:25 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
	else if (a.size <= 6)
	{
		a.info.min = find_min(a);
		minisort(&a, &b);
	}
	else
		full_sort(&a, &b);
	if (c == 2)
		ft_free_data(v);
	return (free_stacks(&a, &b), 0);
}
