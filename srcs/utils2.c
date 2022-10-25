#include "push_swap.h"

void	ft_free_error(int *tab)
{
	free(tab);
	write(2, "Error\n", 6);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
}

void	ft_free(char **tab, int size)
{
	while (size >= 0)
	{
		free(tab[size]);
		size--;
	}
	free(tab);
	tab = 0;
}

int	ft_tablnum(char **arv)
{
	int	i;

	i = 0;
	while (arv[i])
		i++;
	return (i);
}