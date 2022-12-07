/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:10:13 by vmuller           #+#    #+#             */
/*   Updated: 2022/12/06 19:39:22 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_free_data(char **data)
{
	int	i;

	i = 0;
	while (data[i] != NULL)
		free(data[i++]);
	free(data);
}

int	ft_count_v(char **v)
{
	int	i;

	i = 0;
	while (v[i])
		i++;
	return (i);
}

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
