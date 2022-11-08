
#include "../../includes/push_swap.h"

void	ft_reverse_rotate(t_stack *src, int size, int same)
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
	if (src->info.stack_name == 'a' && same == 0)
		ft_putstr("rra\n");
	else if (src->info.stack_name == 'b' && same == 0)
		ft_putstr("rrb\n");
}

void	ft_reverse_rotate_same(t_stack *a, t_stack *b, int check)
{
	ft_reverse_rotate(a, a->size, 1);
	ft_reverse_rotate(b, b->size, 1);
	if (!check)
		ft_putstr("rrr\n");
}
