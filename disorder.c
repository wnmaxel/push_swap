/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:44:04 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/25 13:04:38 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	disorder(char **av)
{
	int		j;
	double	count;
	double	des;

	count = 0;
	des = 0;
	j = 1;
	while (av[j + 1])
	{
		if (atoi(av[j]) > atoi(av[j + 1]))
			des++;
		j++;
		count++;
	}
	if (count == 0)
		return (0);
	return (des / count);
}

int	main(int ac, char **av)
{
	if (ac > 0)
	{
		printf("%f", disorder(av));
	}
	return (0);
}
