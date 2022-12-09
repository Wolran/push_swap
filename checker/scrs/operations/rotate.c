/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@sutdent.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:48:08 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/09 08:48:08 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	ft_rotate_a_b(t_stack *src, int size)
{
	int	temp;
	int	temp_sec;
	int	temp_th;
	int	flag;

	flag = 0;
	temp_th = src->data[0];
	while (size--)
	{
		if (flag)
		{
			temp_sec = src->data[size];
			src->data[size] = temp;
			temp = temp_sec;
			continue ;
		}
		temp = src->data[size];
		src->data[size] = 0;
		flag = 1;
	}
	src->data[src->size - 1] = temp_th;
}

void	ft_rotate_same_a_b(t_stack *a, t_stack *b)
{
	ft_rotate(a, a->size);
	ft_rotate(b, b->size);
}
