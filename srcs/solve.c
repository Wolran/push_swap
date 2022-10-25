void	ft_sort_solve(t_list *a)
{
	t_list	b;
	int		i;
	size_t	j;

	ft_create_lst(&b, a->size_max);
	
	j = 0;
	while (j < a->size_max)
	{
		i = ft_highlest(a);
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
