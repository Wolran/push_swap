/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:10:10 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/06 19:10:56 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	ft_gen_a(t_stack *a, int *tab, int size, int check)
{
	int	i;

	i = 0;
	a->data = (int *)malloc(sizeof(int) * size);
	if (a->data == NULL)
		return (0);
	while (i < size)
	{
		a->data[i] = tab[i];
		i++;
	}
	a->size_max = size;
	a->size = size;
	if (!check)
		a->info.stack_name = 'a';
	return (1);
}

static int	ft_gen_b(t_stack *b, int size, int check)
{
	int	i;

	i = 0;
	b->data = (int *)malloc(sizeof(int) * size);
	if (b->data == NULL)
		return (0);
	while (i < size)
		b->data[i++] = 0;
	b->size_max = size;
	b->size = 0;
	if (!check)
		b->info.stack_name = 'b';
	return (1);
}

void	free_stacks(t_stack *a, t_stack *b)
{
	free(a->data);
	free(b->data);
}

int	ft_create_stacks(t_stack *a, t_stack *b, t_stack *init, int check)
{
	int	aa;
	int	bb;

	aa = ft_gen_a(a, init->data, init->size_max, check);
	bb = ft_gen_b(b, init->size_max, check);
	if (!aa || !bb)
	{
		free_stacks(a, b);
		free(init->data);
		ft_error();
	}
	free(init->data);
	return (1);
}
