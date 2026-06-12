/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariagraciaramirezku <mariagraciaramire    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 19:25:45 by mariagracia       #+#    #+#             */
/*   Updated: 2026/06/12 19:34:34 by mariagracia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/// ra (rotate a): Shift up all elements of stack a by one.
// The first element becomes the last one.
void	ra(t_list **a, int print, t_data *data)
{
	t_list	*tmp;
	t_list	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	if (print)
	{
		write(1, "ra\n", 3);
		data->ops->ra++;
		data->ops->total++;
	}
}

/// rb (rotate b): Shift up all elements of stack b by one.
// The first element becomes the last one.

void	rb(t_list **b, int print, t_data *data)
{
	t_list	*tmp;
	t_list	*lbst;

	if (!b || !*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	lbst = *b;
	while (lbst->next)
		lbst = lbst->next;
	lbst->next = tmp;
	tmp->next = NULL;
	if (print)
	{
		write(1, "rb\n", 3);
		data->ops->rb++;
		data->ops->total++;
	}
}

/// rr (): ra and rb at the same time.
void	rr(t_list **a, t_list **b, t_data *data)
{
	ra(a, 0, data);
	rb(b, 0, data);
	write(1, "rr\n", 3);
	data->ops->rr++;
	data->ops->total++;
}

