/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@sutdent.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:48:29 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/09 08:48:29 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../../includes/push_swap.h"
# include "../GNL/get_next_line.h"

void	ft_checker(t_stack *a, t_stack *b);
void	ft_push_a_b(t_stack *src, t_stack *dst);
void	ft_reverse_rotate_a_b(t_stack *src, int size);
void	ft_reverse_rotate_same_a_b(t_stack *a, t_stack *b);
void	ft_rotate_a_b(t_stack *src, int size);
void	ft_rotate_same_a_b(t_stack *a, t_stack *b);
void	ft_swap_a_b(t_stack *src);
void	ft_swap_same_a_b(t_stack *a, t_stack *b);
void	if_forest(char *str, t_stack *a, t_stack *b);

#endif
