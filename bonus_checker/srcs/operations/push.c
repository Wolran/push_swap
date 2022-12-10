/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@sutdent.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:47:59 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/09 08:47:59 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	ft_push_a_b(t_stack *src, t_stack *dst)
{
	if (!src || !dst || src->size == 0)
		return ;
	ft_move_back_array(dst, dst->size);
	dst->data[0] = src->data[0];
	dst->size++;
	ft_move_top_array(src, src->size);
	src->size--;
}
