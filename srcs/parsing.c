#include "push_swap.h"

static long long	ft_atol(const char *str)
{
	int			i;
	long long	j;
	int			n;

	i = 0;
	j = 0;
	n = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n = n * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + (str[i] - '0');
		i++;
	}
	return (j * n);
}

static int	ft_is_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 48 && str[i] <= 57) || str[i] == '-')
			i++;
		else
			return (0);
	}
	return (1);
}

static int	ft_duplicate(int *tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[i] == tab[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	*ft_pars(int arc, char **arv)
{
	int			i;
	int			*tab;
	long long	res;

	tab = malloc(sizeof(int) * (arc));
	if (!tab)
		return (0);
	i = 0;
	while (i < arc - 1)
	{
		if (!(ft_is_num(arv[i])))
			return (ft_free_error(tab), NULL);
		res = ft_atol(arv[i]);
		if (res > INT_MAX || res < INT_MIN)
			return (ft_free_error(tab), NULL);
		tab[i] = (int)res;
		i++;
	}
	if ((ft_duplicate(tab)) == 0)
		return (ft_free_error(tab), NULL);
	return (tab);
}
