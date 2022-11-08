
#include "../../includes/push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}