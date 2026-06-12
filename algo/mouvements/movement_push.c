/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariagraciaramirezku <mariagraciaramire    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 19:25:17 by mariagracia       #+#    #+#             */
/*   Updated: 2026/06/12 19:26:35 by mariagracia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/// pa (push a): Take the first element at the top of b and put it at the top of a.
void	pa(t_list **a, t_list **b, t_data *data)
{
	t_list	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	write(1, "pa\n", 3);
	data->ops->pa++;
	data->ops->total++;
}
	/// pb (push b): Take the first element at the top of a and put it at the top of b.
// // Do nothing if a is empty.

void	pb(t_list **b, t_list **a, t_data *data)
{
	t_list	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n", 3);
	data->ops->pb++;
	data->ops->total++;
}