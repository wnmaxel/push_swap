/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_simple.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:03:46 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/29 14:31:27 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_sort(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

t_list	*fonction_simple(t_list *a)
{
	while (!valid_sort(a))
	{
		if (a->content > a->next->content)
			sa(a);
		ra(&a);
	}
	return (a);
}

int main(int ac, char **av)
{
    t_list  **a;
    int     j;

    *a = NULL;
    j = 1;
    if (ac < 2)
        return (0);
    while (av[j])
    {
        *a = int_assignation(av[j]);
        j++;
    }
    fonction_simple(a);
    return (0);
}