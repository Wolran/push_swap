#include "push_swap.h"

int	ft_tablnum(char **arv)
{
	int	i;

	i = 0;
	while (arv[i])
		i++;
	return (i);
}

void	ft_free_error(int *tab)
{
	free(tab);
	write(2, "Error\n", 6);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
}
