#include "../../../includes/push_swap.h"

// util pour full sort

int	find_index(int num, int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (num == tab[i])
			return (i);
		i++;
	}
	return (i);
}
