#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

/////////////////////////// list_stack
typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

/////////////////////////// functions
int					ft_flag(char *av);
int					ft_verify_digit(char *str);
int					ft_isalpha(int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_atoi(const char *nptr);
int					int_assignation(char *str);
void				ft_putstr(char *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_back(t_list **lst, t_list *new);
size_t				ft_strlen(char *str);

#endif