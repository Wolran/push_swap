#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_list	t_list;
int						*ft_pars(int arc, char **arv);
void					ft_put_tab(int *tab, size_t size);
void					ft_swap(int *a, int *b);
size_t					ft_smallest(t_list *lst);
void					ft_rot(t_list *lst, char c);
void					ft_push(t_list *lst1, t_list *lst2, char c);
void					create_lst(t_list *lst, size_t size);
void					create_lst_s(t_list *lst, int *data, size_t size);
char					**ft_split(const char *s, char c);
char					*ft_substr(char const *s, unsigned int start, size_t len);
int						ft_tablnum(char **arv);
void					ft_error(void);
void					ft_free_error(int *tab);
void					ft_free(char **tab, int size);

struct	s_list
{
	int		*data;
	size_t	size;
	size_t	size_max;
};

#endif
