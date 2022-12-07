/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:09:55 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/06 19:10:56 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_min(t_stack s)
{
	int	min;
	int	i;

	i = 0;
	min = s.data[i];
	while (i < s.size)
	{
		if (s.data[i] < min)
			min = s.data[i];
		i++;
	}
	return (min);
}
