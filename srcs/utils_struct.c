#include "push_swap.h"

void	ft_create_lst(t_list *lst, size_t size)
{
	lst->data = malloc(sizeof(int) * size);
	if (!lst->data)
		return ;
	lst->size_max = size;
	lst->size = 0;
}

void	ft_create_lst_s(t_list *lst, int *data, size_t size)
{
	lst->data = data;
	lst->size_max = size;
	lst->size = size;
}

void	ft_copy_lst(t_list *lst, t_list *lst2)
{
	int i = -1;
	while (++i <= lst->size_max)
		lst->data[i] = lst2->data[i];
	lst->size_max = lst2->size_max;
	lst->size = lst2->size;
}

void	ft_minustab(t_list *lst, size_t index)
{
	while(index < lst->size)
	{
			lst->data[index] = lst->data[index + 1];
			index++;
	}
	lst->size--;
}