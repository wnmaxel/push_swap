/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 23:28:09 by axweinma          #+#    #+#             */
/*   Updated: 2026/06/09 00:27:48 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_data *data)
{

	if (data->bench == 0)
	{
        write(2, "bench21323\n", 11);
		if (data->strat > 1)
		{
			if (data->strat == 2)
				fonction_simple(&data->a);
			// else if (data->strat == 3)
			// 	fonction_medium(&data->a);
			// else if (data->strat == 4)
			// 	fonction_complex(&data->a);
			// else if (data->strat == 5)
			// 	fonction_adaptative(&data->a);
		}
	}
    return ;
}