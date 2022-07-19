#include "push_swap.h"

// void	ft_put_tab(int *tab, size_t size)
// {
	// size_t	i;

	// i = 0;
	// while (i < size)
	// {
		// printf("%d,", tab[i]);
		// i++;
	// }
	// printf("\n");
// }

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

size_t	ft_smallest(t_list *lst)
{
	int		i;
	size_t	j;

	j = 0;
	i = lst->data[0];
	while (j < lst->size)
	{
		if (i < lst->data[j])
			i = lst->data[j];
		j++;
	}
	return (i);
}

void	ft_rot(t_list *lst, char c)
{
	size_t	i;

	i = 0;
	while (i < lst->size - 1)
	{
		ft_swap(&lst->data[i], &lst->data[i + 1]);
		i++;
	}
	printf("r%c\n", c);
}

void	ft_push(t_list *lst1, t_list *lst2, char c)
{
	if (lst1->size == 0)
		return ;
	lst2->data[lst2->size] = lst1->data[lst1->size - 1];
	lst2->size++;
	lst1->size--;
	printf("p%c\n", c);
}
