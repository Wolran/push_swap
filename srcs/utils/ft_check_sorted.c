
#include "../../includes/push_swap.h"

int	ft_arr_sorted(t_stack stack)
{
	int	i;

	i = 0;
	while (i < stack.size - 1)
	{
		if (stack.data[i] > stack.data[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_arr_ready(t_stack stack)
{
	if (stack.size == stack.size_max)
		return (1);
	return (0);
}
