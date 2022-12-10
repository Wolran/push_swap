/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:09:57 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/06 19:10:56 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	*ft_parse_args(char **v, int size)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * size);
	if (tab == NULL)
		ft_error();
	while (i < size)
	{
		if (!ft_parse_atoi(v[i], &tab[i]))
			ft_error();
		i++;
	}
	return (tab);
}

int	ft_check_args(t_stack *a, t_stack *b, t_stack *init, char **v)
{
	init->data = ft_parse_args(v, init->size_max);
	if (!init->data || !ft_unique(init->data, init->size_max))
	{
		free(init->data);
		ft_error();
	}
	if (!ft_create_stacks(a, b, init, 0))
		return (0);
	return (1);
}

char	**ft_split_arg(char **v, t_stack *init, t_stack *a, t_stack *b)
{
	v = ft_split(v[1], 32);
	if (!v)
		return (NULL);
	init->size_max = ft_count_v(v);
	if (!ft_check_args(a, b, init, v))
		return (NULL);
	return (v);
}

int	ft_nonsplit(char **v, t_stack *init, t_stack *a, t_stack *b)
{
	if (!ft_check_args(a, b, init, v + 1))
		return (0);
	return (1);
}
