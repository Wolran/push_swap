
#include "../includes/push_swap.h"

int	ft_unique(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
			if (tab[i] == tab[j++])
				return (0);
		i++;
	}
	return (1);
}

static int	*ft_parse_args(char **v, int size)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * size);
	if (tab == NULL)
		ft_error();
	while (i < size)
	{
		if (!ft_parse_atoi(v[i], &tab[i]))
			ft_error();
		i++;
	}
	return (tab);
}

int	ft_check_args(t_stack *a, t_stack *b, t_stack *init, char **v)
{
	init->data = ft_parse_args(v, init->size_max);
	if (!init->data || !ft_unique(init->data, init->size_max))
	{
		free(init->data);
		ft_error();
	}
	if (!ft_create_stacks(a, b, init, 0))
		return (0);
	return (1);
}

int ft_count_v(char **v)
{
	int i;
	
	i = 0;
	while (v[i])
		i++;
	return (i);
}

int ft_split_arg(char **v, t_stack *init, t_stack *a, t_stack *b)
{
	v = ft_split(v[1], 32);
	if (!v)
		return (0);
	init->size_max = ft_count_v(v);
	if (!ft_check_args(a, b, init, v))
		return (0);
	return (1);
}

int ft_nonsplit(char **v, t_stack *init, t_stack *a, t_stack *b)
{
		init->size_max = ft_count_v(v) - 1;
		if (!ft_check_args(a, b, init, v + 1))
			return (0);
		return (1);
}
int	main(int c, char **v)
{
	t_stack	a;
	t_stack	b;
	t_stack	init;
	
	if (c == 2)
		ft_split_arg(v, &init, &a, &b);
	else if (c > 2)
		ft_nonsplit(v, &init, &a, &b);
	if (ft_arr_sorted(a) && ft_arr_ready(a))
		return (free_stacks(&a, &b), 0);
	else if (a.size <= 6)
	{
		a.info.min = find_min(a);
		// need minisort(&a, &b);
	}
	else
		//need full_sort(&a, &b);
	if (c == 2)
		ft_free_data(v, init.size_max);
	free_stacks(&a, &b);
	return (0);
}