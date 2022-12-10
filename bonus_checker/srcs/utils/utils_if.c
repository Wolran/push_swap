/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_if.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@sutdent.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:48:14 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/09 08:48:14 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	if_forest(char *str, t_stack *a, t_stack *b)
{
	if (str[0] == 's' && str[1] == 'a')
		ft_swap_a_b(a);
	else if (str[0] == 's' && str[1] == 'b')
		ft_swap_a_b(b);
	else if (str[0] == 's' && str[1] == 's')
		ft_swap_same_a_b(a, b);
	else if (str[0] == 'p' && str[1] == 'a')
		ft_push_a_b(b, a);
	else if (str[0] == 'p' && str[1] == 'b')
		ft_push_a_b(a, b);
	else if (str[0] == 'r' && str[1] == 'r' && str[2] == 'a')
		ft_reverse_rotate_a_b(a, a->size);
	else if (str[0] == 'r' && str[1] == 'r' && str[2] == 'b')
		ft_reverse_rotate_a_b(b, b->size);
	else if (str[0] == 'r' && str[1] == 'r' && str[2] == 'r')
		ft_reverse_rotate_same_a_b(a, b);
	else if (str[0] == 'r' && str[1] == 'a')
		ft_rotate_a_b(a, a->size);
	else if (str[0] == 'r' && str[1] == 'b')
		ft_rotate_a_b(b, b->size);
	else if (str[0] == 'r' && str[1] == 'r')
		ft_rotate_same_a_b(a, b);
}
