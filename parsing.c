/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariagraciaramirezku <mariagraciaramire    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:03:02 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/22 16:48:05 by mariagracia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fonction_bench(void)
{
}

int	fonction_simple(char *av)
{
	while (av)
	{
		if (ft_verify_digit(av))
			int_assignation(av);
		else
			return (write(1, "error", 5), 0);    //here we need to add the int *numbers.
		j++;										// we dont need to do the fonction again, probabli that 
													// should be the default
	}
}

int	fonction_medium(void)
{ 
	//same here we neeed to call the int *numbers
}

int	fonction_complex(void)
{
}

int	fonction_adaptive(void)
{
}

int	ft_flag(char *av)
{
	char	bench[8];
	char	complex[10];
	char	simple[9];
	char	medium[9];
	char	adaptive[11];

	ft_strlcpy(bench, "--bench", 8);
	ft_strlcpy(complex, "--complex", 10);
	ft_strlcpy(simple, "--simple", 9);
	ft_strlcpy(medium, "--medium", 9);
	ft_strlcpy(adaptive, "--adaptive", 11);
	if (ft_strcmp(av, bench) == 0)
		return (fonction_bench(), 1);
	else if (ft_strcmp(av, complex) == 0)
		return (fonction_complex(), 1);
	else if (ft_strcmp(av, simple) == 0)
		return (fonction_simple(), 1);
	else if (ft_strcmp(av, medium) == 0)
		return (fonction_medium(), 1);
	else if (ft_strcmp(av, adaptive) == 0)
		return (fonction_adaptive(), 1);
	ft_putstr("error");
	return (0);
}

int	main(int ac, char **av)
{
	int i;
	int j;

	j = 1;
	i = 0;
	while (av[j] && ac > 0)
	{
		if (av[1][i] == '-' && av[1][i + 1] == '-')
		{
			if (ft_flag(av[1]) == 0)   // here we'l need to deal w int_assignation too
				return (0);
		}
		else if (ft_verify_digit(av[j]))
		{	
			int_assignation(av[j]);
		}
		else
			return (write(1, "error", 5), 0);
		j++;
	}
	return (0);
}