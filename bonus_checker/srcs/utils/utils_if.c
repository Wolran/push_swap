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

static int	ft_end(char *str, int n)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != '\n')
		len++;
	return (len == n);
}

int	if_forest(char *str, t_stack *a, t_stack *b)
{
	if (str[0] == 's' && str[1] == 'a' && ft_end(str, 2))
		return (ft_swap_a_b(a), 1);
	else if (str[0] == 's' && str[1] == 'b' && ft_end(str, 2))
		return (ft_swap_a_b(b), 1);
	else if (str[0] == 's' && str[1] == 's' && ft_end(str, 2))
		return (ft_swap_same_a_b(a, b), 1);
	else if (str[0] == 'p' && str[1] == 'a' && ft_end(str, 2))
		return (ft_push_a_b(b, a), 1);
	else if (str[0] == 'p' && str[1] == 'b' && ft_end(str, 2))
		return (ft_push_a_b(a, b), 1);
	else if (str[0] == 'r' && str[1] == 'r' && str[2] == 'a' && ft_end(str, 3))
		return (ft_reverse_rotate_a_b(a, a->size), 1);
	else if (str[0] == 'r' && str[1] == 'r' && str[2] == 'b' && ft_end(str, 3))
		return (ft_reverse_rotate_a_b(b, b->size), 1);
	else if (str[0] == 'r' && str[1] == 'r' && str[2] == 'r' && ft_end(str, 3))
		return (ft_reverse_rotate_same_a_b(a, b), 1);
	else if (str[0] == 'r' && str[1] == 'a' && ft_end(str, 2))
		return (ft_rotate_a_b(a, a->size), 1);
	else if (str[0] == 'r' && str[1] == 'b' && ft_end(str, 2))
		return (ft_rotate_a_b(b, b->size), 1);
	else if (str[0] == 'r' && str[1] == 'r' && ft_end(str, 2))
		return (ft_rotate_same_a_b(a, b), 1);
	else
		return (0);
}
