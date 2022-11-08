
#include "../../includes/push_swap.h"

void	ft_swap(t_stack *src, int same)
{
	int	temp;

	if (!src || src->size < 2)
		return ;
	temp = src->data[0];
	src->data[0] = src->data[1];
	src->data[1] = temp;
	if (src->info.stack_name == 'a' && same == 0)
		ft_putstr("sa\n");
	else if (src->info.stack_name == 'b' && same == 0)
		ft_putstr("sb\n");
}

void	ft_swap_same(t_stack *a, t_stack *b, int check)
{
	ft_swap(a, 1);
	ft_swap(b, 1);
	if (!check)
		ft_putstr("ss\n");
}
