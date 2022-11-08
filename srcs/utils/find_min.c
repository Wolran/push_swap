
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
