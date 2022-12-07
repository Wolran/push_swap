/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:09:42 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/06 19:09:42 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

static int	max_num_s(t_stack *s)
{
	int	i;
	int	res;

	i = 0;
	res = s->data[i];
	while (i < s->size)
	{
		if (s->data[i] > res)
			res = s->data[i];
		i++;
	}
	return (res);
}

static int	*create_s_arr(t_stack *s)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * s->size);
	if (!tab)
		return (NULL);
	while (i < s->size)
	{
		tab[i] = s->data[i];
		i++;
	}
	return (tab);
}

static int	search_rotate(t_stack *s, int max, int size)
{
	int	i;
	int	*tab;

	tab = create_s_arr(s);
	i = size;
	while (tab[size] != max)
		size--;
	i -= size;
	size = 0;
	while (tab[size] != max)
		size++;
	free(tab);
	if (i < size)
		return (1);
	return (0);
}

void	push_to_a(t_stack *a, t_stack *b)
{
	int	max_num;

	while (b->size)
	{
		max_num = max_num_s(b);
		if (b->data[0] != max_num
			&& search_rotate(b, max_num, b->size) == 0)
			ft_rotate(b, b->size, 0);
		else if (b->data[0] != max_num
			&& search_rotate(b, max_num, b->size) == 1)
			ft_reverse_rotate(b, b->size, 0);
		else
			ft_push(b, a);
	}
}
