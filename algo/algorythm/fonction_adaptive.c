/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_adaptive.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariagraciaramirezku <mariagraciaramire    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 21:33:59 by gerramir          #+#    #+#             */
/*   Updated: 2026/06/12 19:22:04 by mariagracia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static double	disorder(t_data *data)
{
	t_list	*tmp;
	double	count;
	double	des;

	count = 0;
	des = 0;
	tmp = data->a;
	while (tmp && tmp->next)
	{
		if (tmp->num > tmp->next->num)
			des++;
		tmp = tmp->next;
		count++;
	}
	if (count == 0)
		return (0);
	return (des / count);
}

void	fonction_adaptive(t_data *data)
{
	double	dis;

	dis = disorder(data);
	if (dis == 0)
		return ;
	else if (dis <= 0.2)
		fonction_simple(data);
	else if (dis <= 0.5)
		fonction_medium(data);
	else
		fonction_complex(data);
}
