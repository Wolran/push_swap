/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@sutdent.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:47:51 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/09 08:47:51 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	ft_swap_a_b(t_stack *src)
{
	int	temp;

	if (!src || src->size < 2)
		return ;
	temp = src->data[0];
	src->data[0] = src->data[1];
	src->data[1] = temp;
}

void	ft_swap_same_a_b(t_stack *a, t_stack *b)
{
	ft_swap_a_b(a);
	ft_swap_a_b(b);
}
