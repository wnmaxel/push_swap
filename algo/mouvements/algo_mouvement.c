/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_mouvement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:41:52 by axweinma          #+#    #+#             */
/*   Updated: 2026/06/09 21:47:53 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/// sa (swap a): Swap the first two elements at the top of stack a.
// Do nothing if there is only one or no elements.

// void    sa(t_list *a,
// int print)// on lui envoie ladresse de la a pour pouvoir modifier directement la stack
// {
//     int tmp1;
//     if(!a || !a->next)
//         return ;
//     tmp1 = a->num;
//     a->num = a->next->num;
//     a->next->num = tmp1;
//     if(print)
//         write(1, "sa\n", 3);
// }

void	sa(t_list **a, int print, t_data *data)
{
	t_list	*first;
	t_list	*second;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	if (print)
		write(1, "sa\n", 3);
	data->ops->sa++;
	data->ops->total++;
}

/// sb (swap b): Swap the first two elements at the top of stack b.
// Do nothing if there is only one or no elements.

void	sb(t_list **b, int print, t_data *data) // on lui envoie ladresse de la a pour pouvoir modifier directement la stack
{
	t_list	*first;
	t_list	*second;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	second = (*b)->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	if (print)
		write(1, "sb\n", 3);
	data->ops->sb++;
	data->ops->total++;
}

/// ss (): sa and sb at the same time.
void	ss(t_list **a, t_list **b, t_data *data)
{
	sa(a, 0);
	sb(b, 0);
	write(1, "ss", 2);
	data->ops->ss++;
	data->ops->total++;
}

/// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.

void	pa(t_list **a, t_list **b, t_data *data)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!*b)
		return ;
	tmp1 = *b;
	tmp2 = *a;
	*a = tmp1;
	(*a)->next = tmp2;
	*b = tmp1->next;
	write(1, "pa", 2);
	data->ops->pa++;
	data->ops->total++;
}

/// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.
void	pb(t_list **b, t_list **a, t_data *data)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!*a)
		return ;
	tmp1 = *a;
	tmp2 = *b;
	*b = tmp1;
	(*b)->next = tmp2;
	*a = tmp1->next;
	write(1, "pb", 2);
	data->ops->pb++;
	data->ops->total++;
}

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
		write(1, "ra\n", 3);
	data->ops->ra++;
	data->ops->total++;
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
		write(1, "rb\n", 3);
	data->ops->rb++;
	data->ops->total++;
}

/// rr (): ra and rb at the same time.
void	rr(t_list **a, t_list **b, t_data *data)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr", 2);
	data->ops->rr++;
	data->ops->total++;
}

/// rra (reverse rotate a): Shift down all elements of stack a by one.
/// The last element becomes the first one.
void	rra(t_list **a, int print, t_data *data)
{
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*tmp3;

	if (!a)
		return ;
	tmp1 = *a;
	tmp2 = *a;
	while (tmp1->next->next)
		tmp1 = tmp1->next;
	tmp3 = tmp1->next;
	tmp3->next = tmp2;
	tmp1->next = NULL;
	*a = tmp3;
	if (print)
		write(1, "rra", 3);
	data->ops->rra++;
	data->ops->total++;
}

/// rrb (reverse rotate b): Shift down all elements of stack b by one.
// The last element becomes the first one.
void	rrb(t_list **b, int print, t_data *data)
{
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*tmp3;

	if (!b)
		return ;
	tmp1 = *b;
	tmp2 = *b;
	while (tmp1->next->next)
		tmp1 = tmp1->next;
	tmp3 = tmp1->next;
	tmp3->next = tmp2;
	tmp1->next = NULL;
	*b = tmp3;
	if (print)
		write(1, "rrb", 3);
	data->ops->rrb++;
	data->ops->total++;
}

/// rrr (): rra and rrb at the same time
void	rrr(t_list **a, t_list **b, t_data *data)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr", 2);
	data->ops->rrr++;
	data->ops->total++;
}