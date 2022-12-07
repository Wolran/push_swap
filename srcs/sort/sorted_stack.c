/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:09:52 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/06 19:10:56 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static int	*ft_fill_arr(t_stack a)
{
	int	i;
	int	*tab;

	i = 0;
	tab = (int *)malloc(a.size * sizeof(int));
	if (!tab)
		return (NULL);
	while (i < a.size)
	{
		tab[i] = a.data[i];
		i++;
	}
	return (tab);
}

int	*ft_insertion_sort(t_stack a)
{
	int	i;
	int	j;
	int	*tab;

	i = 1;
	tab = ft_fill_arr(a);
	while (i < a.size)
	{
		if (tab[i] < tab[i - 1])
		{
			j = i;
			while (tab[j] < tab[j - 1] && j > 0)
			{
				swap(&tab[j], &tab[j - 1]);
				if (j - 1 > 0)
					j--;
			}
		}
		i++;
	}
	return (tab);
}
