#include "push_swap.h"

t_list ft_bin(t_list *ancien_a)
{
	size_t i;
	int j;
	size_t k;
	t_list a;


	ft_create_lst(&a, ancien_a->size_max);
	ft_copy_lst(&a, ancien_a);
	i = 0;
	while (i < ancien_a->size)
	{
		k = -1;
		j = ft_smallest(ancien_a);
		while (++k <= ancien_a->size_max)
		{
			if (j == ancien_a->data[k])
			{	
				ft_replace(&a, ancien_a, j, k);
				ft_minustab(ancien_a, k);
				break;
			}
		}
	}
	return (a);
}
void ft_replace(t_list *a, t_list *ancien_a, int j, int k)
{
	size_t source;
	
	ancien_a->data[k] = ft_trans_bin();
	source = -1;
	while (++source < a->size_max)
	{
		if (j == a->data[source])
		{
			a->data[source] = ancien_a->data[k];
			break;
		}
		a->size = a->size_max;
	}
}

static int	ft_arc2_split(int arc, char **arv, t_list lst_a)
{
	int		*tab;

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
		lst_a = ft_bin(&lst_a);
		//ft_sort_solve(&lst_a);
		ft_put_tab(lst_a.data, lst_a.size);
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
		ft_arc2_split(arc, arv, lst_a);
	else if (arc > 2)
	{
		arv = arv + 1;
		tab = ft_pars(arc, arv);
		if (!tab)
			return (1);
		ft_create_lst_s(&lst_a, tab, arc - 1);
		lst_a = ft_bin(&lst_a);
		ft_sort_solve(&lst_a);
		ft_put_tab(lst_a.data, lst_a.size_max);
		free(tab);
		
		return (0);
	}
	return (1);
}
