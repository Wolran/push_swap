#include "push_swap.h"

void	ft_create_lst(t_list *lst, size_t size)
{
	lst->data = malloc(sizeof(int) * size);
	lst->size_max = size;
	lst->size = 0;
}

void	ft_create_lst_s(t_list *lst, int *data, size_t size)
{
	lst->data = data;
	lst->size_max = size;
	lst->size = size;
}

static void	ft_sort_solve(t_list *a)
{
	t_list	b;
	int		i;
	size_t	j;

	ft_create_lst(&b, a->size_max);
	j = 0;
	while (j < a->size_max)
	{
		i = ft_smallest(a);
		while (a->data[a->size - 1] != i)
			ft_rot(a, 'a');
		ft_push(a, &b, 'a');
		j++;
	}
	j = 0;
	while (j < a->size_max)
	{
		ft_push(&b, a, 'b');
		j++;
	}
}

static int	ft_arc2_split(int arc, char **arv, int *tab, t_list lst_a)
{
	if (arc == 2)
	{
		arv = ft_split(arv[1], 32);
		if (!arv)
			return(ft_error(), 1); 
		arc = (ft_tablnum(arv) + 1);
		tab = ft_pars(arc, arv);
		if (!tab)
			return (ft_free(arv, arc - 1), 1);
		ft_create_lst_s(&lst_a, tab, arc - 1);
		ft_sort_solve(&lst_a);
		ft_put_tab(lst_a.data, lst_a.size_max);
		free(tab);
		ft_free(arv, arc - 1);
	}
	return (0);
}		


int	main(int arc, char **arv)
{
	t_list	lst_a;
	int		*tab;

	if (arc == 2)
		ft_arc2_split(arc, arv, tab, lst_a);
	else if (arc > 2)
	{
		arv = arv + 1;
		tab = ft_pars(arc, arv);
		if (!tab)
			return (1);
		ft_create_lst_s(&lst_a, tab, arc - 1);
		ft_sort_solve(&lst_a);
		ft_put_tab(lst_a.data, lst_a.size_max);
		free(tab);
		
		return (0);
	}
	return (1);
}
