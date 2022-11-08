
#include "../../includes/push_swap.h"

static void	ft_move_back_array(t_stack *src, int size)
{
	size += 1;
	while (size--)
		src->data[size] = src->data[size - 1];
}

static void	ft_move_top_array(t_stack *src, int size)
{
	int	temp;
	int	temp_sec;
	int	flag;

	flag = 0;
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
}

void	ft_push(t_stack *src, t_stack *dst)
{
	if (!src || !dst || src->size == 0)
		return ;
	ft_move_back_array(dst, dst->size);
	dst->data[0] = src->data[0];
	dst->size++;
	ft_move_top_array(src, src->size);
	src->size--;
	if (dst->info.stack_name == 'a')
		ft_putstr("pa\n");
	else if (dst->info.stack_name == 'b')
		ft_putstr("pb\n");
}
