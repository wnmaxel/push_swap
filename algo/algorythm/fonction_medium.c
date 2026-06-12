/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_medium.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 16:08:44 by axweinma          #+#    #+#             */
/*   Updated: 2026/06/12 17:58:06 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	len_chunks(t_list **a)
{
	ft_lstsize(*a);
}

int	ft_sqrt(int n) // chunks size
{
	int i;

	i = 0;
	while (i * i <= n)
		i++;
	return (i - 1);
}
void	chunk_sort(t_list **a)
{
	int	i;
	int	n;
	int	chunk_size;
	int	num_chunks;
		int c;
		int min_rank;
		int max_rank;

	i = 0;
	n = ft_lstsize(a);
	chunk_size = ft_sqrt(n);
	num_chunks = (n + chunk_size - 1) / chunk_size;
	while (i < n - 1)
	{
		if (i < max_index(*a) && i > position(*a))
			pb();
		else
			ra();
		i++;
		c = 0;
		while (c < num_chunks)
		{
			min_rank = c * chunk_size;
			max_rank = (c + 1) * chunk_size - 1;
			c++;
		}
	}
}

void	medium(t_list **a, t_list **b)
{
}