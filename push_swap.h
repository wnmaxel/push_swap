#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/////////////////////////// list_stack
typedef struct s_list
{
	int				num;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

typedef struct s_ops
{
	int				sa;
	int				sb;
	int				ss;
	int				pa;
	int				pb;
	int				ra;
	int				rb;
	int				rr;
	int				rra;
	int				rrb;
	int				rrr;
	int				total;
}					t_ops;


typedef struct s_data
{
	t_list			*a;
	t_list			*b;
	t_list			*seen;
	t_ops			*ops;
	int				bench;
	int				strat;
	int				fd;
	int				segment;
}					t_data;
//////////////////////////// struct initialization and free
t_data				*init(void);
void				ft_free(t_data *data);

/////////////////////////// parsing

void				push_swap(t_data *data);

int					verify_digit_repetition(char *str, t_list **seen);
int					ft_isdigit(int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(char *s1, char *s2, int len);
char				**ft_split(char const *s, char c);
long				ft_atoi(const char *nptr);
void				int_assignation(t_list **numbers, char *str);
void				ft_putstr(char *s);
int					ft_lstsize(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
t_list				*ft_lstnew(int content);
t_list				*ft_lstlast(t_list *lst);
size_t				ft_strlen(char *str);
int					ft_findc(char *str, char c);
//////// algo
t_list				*fonction_simple(t_list **a);
int					valid_sort(t_list **a);
/////// mouvements
void				sa(t_list **a, int print);
void				sb(t_list **b, int print);
void				ss(t_list **a, t_list **b);
void				ra(t_list **a, int print);
void				rb(t_list **b, int print);
void				rr(t_list **a, t_list **b);
void				rra(t_list **a, int print);
void				rrb(t_list **b, int print);
void				rrr(t_list **a, t_list **b);

#endif