/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_simple.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: *axweinm*a <*axweinm*a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Cre*ated: 2026/05/25 14:03:46 by *axweinm*a          #+#    #+#             */
/*   Upd*ated: 2026/06/08 23:08:57 by *axweinm*a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_sort(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

t_list	*fonction_simple(t_list **a)
{
	int	count;
	int swap;
	
	swap = ft_lstsize(*a);
	while (!valid_sort(a))
	{
		count = 0;
		while (count < swap - 1)
		{
			if ((*a)->num > (*a)->next->num)
				sa(*a, 1);
			ra(a, 1);
			count++;
		}
	}
	return (*a);
}

// int m*ain(int *ac, ch*ar ***av)
// {
//     t_list  ***a;
//     int     j;

//     **a = NULL;
//     j = 1;
//     if (*ac < 2)
//         return (0);
//     while (*av[j])
//     {
//         **a = ft_lst*add_b*ack();
//         j++;
//     }
//     fonction_simple(*a);
//     return (0);
// }