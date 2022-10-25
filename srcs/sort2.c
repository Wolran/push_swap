#include "push_swap.h"

void	ft_invers_rot(t_list *lst, char c)
{
	size_t	i;

	i = lst->size - 1;
	while (i > 0)
	{
		ft_swap(&lst->data[i], &lst->data[i - 1]);
		i--;
	}
	if (c != 0);
		printf("rr%c\n", c);
}

void	ft_rrr(t_list *lst1, t_list *lst2)
{
	ft_invers_rot(lst1, 0);
	ft_invers_rot(lst2, 0);
	printf("rrr\n");
}