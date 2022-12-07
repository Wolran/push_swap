/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:08:58 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/06 19:10:56 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	sort_three(t_stack *s)
{
	if (ft_arr_sorted(*s))
		return ;
	if (s->size == 2)
	{
		ft_swap(s, 0);
		return ;
	}
	if (s->data[0] < s->data[1] && s->data[0] > s->data[2] && s->data[1] > s->data[2])
		ft_reverse_rotate(s, s->size, 0);
	else if (s->data[0] > s->data[1] && s->data[0] > s->data[2]
		&& s->data[1] < s->data[2])
		ft_rotate(s, s->size, 0);
	else
		ft_swap(s, 0);
	if (s->data[0] > s->data[1])
		ft_rotate(s, s->size, 0);
	if (s->data[1] > s->data[2])
		ft_reverse_rotate(s, s->size, 0);
}

static void	merge(t_stack *a, t_stack *b)
{
	int	max_a;
	int	min;

	max_a = a->data[2];
	min = a->info.min;
	while (b->size > 0)
	{
		if (a->data[0] > b->data[0] || (b->data[0] > max_a && a->data[0] == min))
			ft_push(b, a);
		ft_rotate(a, a->size, 0);
	}
	while (a->data[0] != min)
		ft_rotate(a, a->size, 0);
}

void	minisort(t_stack *a, t_stack *b)
{
	if (a->size == 2)
	{
		ft_swap(a, 0);
		return ;
	}
	while (a->size > 3)
		ft_push(a, b);
	sort_three(a);
	sort_three(b);
	merge(a, b);
}
