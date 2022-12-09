/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@sutdent.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:48:03 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/09 08:48:03 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	ft_reverse_rotate_a_b(t_stack *src, int size)
{
	int	temp;
	int	temp_sec;
	int	i;

	temp = src->data[size - 1];
	i = 0;
	while (i < size)
	{
		temp_sec = src->data[i];
		src->data[i] = temp;
		temp = temp_sec;
		i++;
	}
}

void	ft_reverse_rotate_same_a_b(t_stack *a, t_stack *b)
{
	ft_reverse_rotate(a, a->size);
	ft_reverse_rotate(b, b->size);

}
