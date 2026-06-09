
#include "push_swap.h"

int	valid_flag(char *av)
{
	if (ft_strcmp(av, "--bench") == 0)
		return (1);
	else if (ft_strcmp(av, "--simple") == 0)
		return (2);
	else if (ft_strcmp(av, "--medium") == 0)
		return (3);
	else if (ft_strcmp(av, "--complex") == 0)
		return (4);
	else if (ft_strcmp(av, "--adaptative") == 0)
		return (5);
	write(2, "Error\n", 6);
	return (0);
}

int	flag_assignation(char *s1, char *s2, int *bench, int *index)
{
	int	flag;

	flag = 0;
	if (valid_flag(s1) > 0)
	{
		if (valid_flag(s1) > 1)
		{
			flag = valid_flag(s1);
			*bench = 0;
			*index = 2;
		}
		else if (valid_flag(s1) == 1 && valid_flag(s2) == 0)
		{
			flag = 0;
			*bench = 1;
			*index = 2;
		}
		else if (valid_flag(s1) == 1 && valid_flag(s2) > 1)
		{
			flag = valid_flag(s2);
			*bench = 1;
			*index = 3;
		}
	}
	return (flag);
}

static void	charto_int(char **num, t_list **numbers, t_list **seen)
{
	int	j;

	j = 0;
	while (num[j])
	{
		if (!(verify_digit_repetition(num[j], seen)))
		{
			printf("erreur dans charto_int, num[j] = %s\n", num[j]);

			write(2, "Error\n", 6);
			return ;
		}
		int_assignation(numbers, num[j++]);
	}
}

static void	parse_args(int ac, char **av, t_data *data)
{
	char	**num;
	int		j;

	j = 1;
	if (ac >= 3 && ft_strncmp(av[1], "--", 2) == 0)
		data->strat = flag_assignation(av[1], av[2], &data->bench, &j);
	else if (ft_strncmp(av[1], "--", 2) == 0)
		data->strat = flag_assignation(av[1], NULL, &data->bench, &j);
	while (av[j])
	{
		if (!(verify_digit_repetition(av[j], &data->seen)))
		{
			write(2, "Error\n", 6);
			return ;
		}
		else if (ft_findc(av[j], ' '))
		{
			num = ft_split(av[j], ' ');
			charto_int(num, &data->a, &data->seen);
			j++;
		}
		else
			int_assignation(&data->a, av[j++]);
	}
}

int	main(int ac, char **av)
{
	t_data *data;
	
	if (ac < 2)
		return (0);
	data = init();
	parse_args(ac, av, data);
	push_swap(data);
	ft_free(data);
	return (0);
}
