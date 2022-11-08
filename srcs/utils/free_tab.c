
#include "../../includes/push_swap.h"

void ft_free_data(char **data, int size)
{
	while (size >= 0)
	{
		free(data[size]);
		size--;
	}
	free(data);
	data = 0;
}
