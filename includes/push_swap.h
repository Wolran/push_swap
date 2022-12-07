/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:09:18 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/06 19:38:59 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_info
{
	char	stack_name;
	int		min;
}				t_info;

typedef struct s_stack
{
	int		*data;
	int		size;
	int		size_max;
	t_info	info;
}				t_stack;

void	ft_putstr(char *str);
void	ft_error(void);
void	free_stacks(t_stack *a, t_stack *b);
void	ft_swap(t_stack *src, int same);
void	ft_swap_same(t_stack *a, t_stack *b, int check);
void	ft_push(t_stack *src, t_stack *dst);
void	ft_rotate(t_stack *src, int size, int same);
void	ft_rotate_same(t_stack *a, t_stack *b, int check);
void	ft_reverse_rotate(t_stack *src, int size, int same);
void	ft_reverse_rotate_same(t_stack *a, t_stack *b, int check);
void	minisort(t_stack *a, t_stack *b);
void	full_sort(t_stack *a, t_stack *b);
void	push_to_b(t_stack *a, t_stack *b, int sort_size, int *tab);
void	push_to_a(t_stack *a, t_stack *b);
char	**ft_split(const char *s, char c);
void	ft_free_data(char **data);
int		ft_isdigit(int c);
int		ft_parse_atoi(const char *s, int *res);
int		ft_arr_sorted(t_stack stack);
int		ft_create_stacks(t_stack *a, t_stack *b, t_stack *init, int check);
int		ft_check_args(t_stack *a, t_stack *b, t_stack *init, char **v);
int		ft_checker_args(t_stack *a, t_stack *b, t_stack *init, char **v);
int		ft_arr_ready(t_stack stack);
int		find_min(t_stack s);
int		find_index(int num, int *tab, int size);
int		*ft_insertion_sort(t_stack a);
int		ft_count_v(char **v);
int		ft_unique(int *tab, int size);

#endif
