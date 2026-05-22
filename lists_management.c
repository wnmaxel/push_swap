/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariagraciaramirezku <mariagraciaramire    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 12:30:39 by mariagracia       #+#    #+#             */
/*   Updated: 2026/05/22 15:38:13 by mariagracia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(void *content);
{
    t_list  *new;
    
    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = new;
    new->next = NULL;
    return (new);   
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	end = ft_lstlast(*lst);
	end->next = new;
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}