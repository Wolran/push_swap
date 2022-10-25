#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

/*			DEFFINE			*/
typedef struct s_list	t_list;


/*			SOLVE			*/
int						*ft_pars(int arc, char **arv);
void					ft_put_tab(int *tab, size_t size);
int						ft_trans_bin(void);
void					ft_replace(t_list *a, t_list *ancien_a, int j, int k);
void					ft_sort_solve(t_list *a);


/*			UTILS			*/
void					ft_swap(int *a, int *b);
size_t					ft_smallest(t_list *lst);
size_t					ft_highlest(t_list *lst);
char					**ft_split(const char *s, char c);
char					*ft_substr(char const *s, unsigned int start, size_t len);
int						ft_tablnum(char **arv);
void					ft_error(void);
void					ft_free_error(int *tab);
void					ft_free(char **tab, int size);


/*			SORT			*/
void					ft_swap_first(t_list *lst, char c);
void					ft_ss(t_list *lst1, t_list *lst2);
void					ft_push(t_list *lst1, t_list *lst2, char c);
void					ft_rot(t_list *lst, char c);
void					ft_rr(t_list *lst1, t_list *lst2);
void					ft_invers_rot(t_list *lst, char c);
void					ft_rrr(t_list *lst1, t_list *lst2);


/*			STRUCT			*/
void					ft_copy_lst(t_list *lst, t_list *lst2);
void					ft_create_lst_s(t_list *lst, int *data, size_t size);
void					ft_create_lst(t_list *lst, size_t size);
void					ft_minustab(t_list *lst, size_t index);

struct					s_list
{
	int		*data;
	size_t	size;
	size_t	size_max;
};

#endif
