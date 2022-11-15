
#include "../../includes/push_swap.h"

void	full_sort(t_stack *a, t_stack *b)
{
	int	*tab;

	tab = ft_insertion_sort(*a);
	if (a->size_max <= 100)
		push_to_b(a, b, 15, tab);
	else
		push_to_b(a, b, 30, tab);
	push_to_a(a, b);
	free(tab);
}
