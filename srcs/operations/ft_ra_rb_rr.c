
#include "../../includes/push_swap.h"

void	ft_rotate(t_stack *src, int size, int same)
{
	int	temp;
	int	temp_sec;
	int	temp_th;
	int	flag;

	flag = 0;
	temp_th = src->data[0];
	while (size--)
	{
		if (flag)
		{
			temp_sec = src->data[size];
			src->data[size] = temp;
			temp = temp_sec;
			continue ;
		}
		temp = src->data[size];
		src->data[size] = 0;
		flag = 1;
	}
	src->data[src->size - 1] = temp_th;
	if (src->info.stack_name == 'a' && same == 0)
		ft_putstr("ra\n");
	else if (src->info.stack_name == 'b' && same == 0)
		ft_putstr("rb\n");
}

void	ft_rotate_same(t_stack *a, t_stack *b, int check)
{
	ft_rotate(a, a->size, 1);
	ft_rotate(b, b->size, 1);
	if (!check)
		ft_putstr("rr\n");
}
