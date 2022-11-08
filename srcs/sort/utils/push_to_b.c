
#include "../../../includes/push_swap.h"

//util pour fullsort

void	push_to_b(t_stack *a, t_stack *b, int sort_size, int *tab)
{
	int	l;

	l = 0;
	while (a->size)
	{
		if (l > 1 && find_index(a->data[0], tab, a->size_max) <= l)
		{
			ft_push(a, b);
			ft_rotate(b, b->size, 0);
			l++;
		}
		else if (find_index(a->data[0], tab, a->size_max) <= l + sort_size)
		{
			ft_push(a, b);
			l++;
		}
		else if (find_index(a->data[0], tab, a->size_max) >= l)
			ft_rotate(a, a->size, 0);
	}
}
