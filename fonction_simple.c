/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_simple.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:03:46 by axweinma          #+#    #+#             */
/*   Updated: 2026/06/08 14:26:59 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_sort(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp->next)
	{
		if (tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

t_list	*fonction_simple(t_list *a)
{
	while (!valid_sort(a))
	{
		if (a->num > a->next->num)
			sa(a, 1);
		ra(&a, 1);
	}
	return (a);
}

// int main(int ac, char **av)
// {
//     t_list  **a;
//     int     j;

//     *a = NULL;
//     j = 1;
//     if (ac < 2)
//         return (0);
//     while (av[j])
//     {
//         *a = ft_lstadd_back();
//         j++;
//     }
//     fonction_simple(a);
//     return (0);
// }