#include "push_swap.h"

void	ft_put_tab(int *tab, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		printf("%d, ", tab[i]);
}

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

	i = lst->data[0];
	j = 0;
	while (j < lst->size)
	{
		if (i > lst->data[j])
			i = lst->data[j];
		j++;
	}
	return (i);
}

size_t	ft_highlest(t_list *lst)
{
	int		i;
	size_t	j;

	i = lst->data[0];
	j = 0;
	while (j < lst->size)
	{
		if (i < lst->data[j])
			i = lst->data[j];
		j++;
	}
	return (i);
}

int ft_trans_bin(void)
{
	static int	stat = 0;
	int			bin;
	int			tab[10];
	int			i;

	stat++;
	bin = stat;
	i = 0;
	while(bin > 0)
	{
		tab[i] = bin%2;  
		bin = bin/2;
		i++;
	}
	while(--i >= 0)
		bin = bin * 10 + tab[i];
	return (bin);
}