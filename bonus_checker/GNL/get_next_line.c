/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 08:25:25 by vmuller           #+#    #+#             */
/*   Updated: 2022/05/12 08:25:28 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strjoin(char *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	char	*str;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		str = (char *)malloc(sizeof(char) * (len1 + ft_strlen(s2) + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		free(s1);
		return (str);
	}
	return (NULL);
}

static void	*ft_calloc(size_t elcount, size_t elsize)
{
	char			*ptr;
	unsigned int	total;
	unsigned int	i;

	total = elcount * elsize;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (total > 0)
	{
		ptr[i] = 0;
		i++;
		total--;
	}
	return ((void *)ptr);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*str;
	int			flag;
	int	size;

	size = 1;
	buffer = ft_calloc((size + 1), sizeof(char));
	str = NULL;
	flag = read(fd, buffer, size);
	if (flag > 0)
		str = ft_calloc((size + 1), sizeof(char));
	while (flag > 0 && buffer[0] != '\n')
	{
		str = ft_strjoin(str, buffer);
		flag = read(fd, buffer, size);
	}
	if (buffer[0] == '\n')
		str = ft_strjoin(str, "\n");
	free(buffer);
	return (str);
}

/*
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
int	main(void)
{
	int	fd;
	
	fd = open("fichier", O_RDONLY);
	
	for (int i = 0; i < 10; i++)
		printf("%s", get_next_line(fd));
}
*/

