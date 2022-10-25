#include "push_swap.h"

void	ft_rot(t_list *lst, char c)
{
	size_t	i;

	i = 0;
	while (i < lst->size - 1)
	{
		ft_swap(&lst->data[i], &lst->data[i + 1]);
		i++;
	}
	if (c != 0);
		printf("r%c\n", c);
}

void	ft_rr(t_list *lst1, t_list *lst2)
{
	ft_rot(lst1, 0);
	ft_rot(lst2, 0);
	printf("rr\n");
}

void	ft_push(t_list *lst1, t_list *lst2, char c)
{
	if (lst1->size == 0)
		return ;
	lst2->data[lst2->size] = lst1->data[lst1->size - 1];
	lst2->size++;
	lst1->size--;
	if (c != 0)
		printf("p%c\n", c);
}

void ft_swap_first(t_list *lst, char c)
{
	if (lst->size < 2)
		return ;
	ft_swap(&lst->data[0], &lst->data[1]);
	if (c != 0)
		printf("s%c\n");
}

void	ft_ss(t_list *lst1, t_list *lst2)
{
	ft_swap_first(lst1, 0);
	ft_swap_first(lst2, 0);
	printf("ss\n");
}