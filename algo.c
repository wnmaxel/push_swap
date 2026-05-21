/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:41:52 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/22 01:45:29 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

///sa (swap a): Swap the first two elements at the top of stack a.
//Do nothing if there is only one or no elements.

void    sa(t_list *a)// on lui envoie ladresse de la a pour pouvoir modifier directement la stack
{
    int tmp1;
    if(!a || !a->next)
        return;
    tmp1 = a->content;
    a->content = a->next->content;
    a->next->content = tmp1;
}


/// sb (swap b): Swap the first two elements at the top of stack b.
// Do nothing if there is only one or no elements.

void    sb(t_list *b)// on lui envoie ladresse de la a pour pouvoir modifier directement la stack
{
    int tmp1;
    if(!b || !b->next)
        return;
    tmp1 = b->content;
    b->content = b->next->content;
    b->next->content = tmp1;
}

/// ss (): sa and sb at the same time.
void    ss(t_list *a, t_list *b)
{
    int tmp1;
    int tmp2;
    if(!a || !a->next)
        return;
    tmp1 = a->content;
    a->content = a->next->content;
    a->next->content = tmp1;

    if(!b || !b->next)
        return;
    tmp2 = b->content;
    b->content = b->next->content;
    b->next->content = tmp2;
}

/// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.

void    pa(t_list *a, t_list *b)
{
    if(!b)
        return;
    b->content
    
}

/// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.

/// ra (rotate a): Shift up all elements of stack a by one.
// The first element becomes the last one.
/*Récapitulatif de ce que fait ton code
LigneRôleif(!a)stack vide → on ne fait rien
tmp = *a sauvegarde le premier nœud
*a = (*a)->next la nouvelle tête devient le deuxième nœud
while((*a)->next)parcourt jusqu'au dernier nœud
*a = (*a)->next avance dans la liste
(*a)->next = tmp branche le dernier vers l'ancien premier
tmp->next = NULLferme la liste*/
void    ra(t_list **a)
{
    t_list *tmp;        
    if(!a || !*a)
        return;
    tmp = *a;
    *a = (*a)->next;
    while((*a)->next)
        *a = (*a)->next;
    (*a)->next = tmp;
    tmp->next = NULL;
}
/*Comme on en a parlé — a = a->next à l'intérieur de la fonction ne modifie que la copie locale de a. La vraie tête de liste dans ton main ne change pas.
C'est le problème fondamental de ra comparé à sa — dans sa tu modifiait les contenus des nœuds, donc pas besoin de changer la tête. Ici tu changes qui est la tête.

Ce qu'il faut changer
Juste la signature de ta fonction et les endroits où tu utilises a :

t_list *a devient t_list **a
a devient *a partout où tu accèdes à la tête
a->next devient (*a)->next*/


/// rb (rotate b): Shift up all elements of stack b by one.
// The first element becomes the last one.

void    rb(t_list **b)
{
    t_list *tmp;        
    if(!b)
        return;
    tmp = *b;
    *b = (*b)->next;
    while((*b)->next)
        *b = (*b)->next;
    (*b)->next = tmp;
    tmp->next = NULL;
}

/// rr (): ra and rb at the same time.
void    rr(t_list **a, t_list **b)
{
    ra(a);
    rb(b);
}


/// rra (reverse rotate a): Shift down all elements of stack a by one.
/// The last element becomes the first one.

/// rrb (reverse rotate b): Shift down all elements of stack b by one.
// The last element becomes the first one.

/// rrr (): rra and rrb at the same time