

#include "push_swap.h"

int	ft_strncmp(char *s1, char *s2, int len)
{
	int	i;

	i = 0;
	while (i < len && s2[i] && s1[i] && s2[i] == s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_lstsize(t_list *lst)
{
	int size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}