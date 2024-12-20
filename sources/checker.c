/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:46:46 by enpassel          #+#    #+#             */
/*   Updated: 2024/12/20 16:48:37 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_int(char *str)
{
	long long int	i;
	int				mod;

	i = 0;
	mod = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
	{
		mod = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		return (0);
	return (1);
}

int	ft_duplicated(char **argv, int i)
{
	int	j;

	j = i + 1;
	while (argv[j])
	{
		if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			return (0);
		j++;
	}
	return (1);
}

int	ft_check_input(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != ' ')
				return (0);
			if (ft_strlen(argv[i]) > 11)
				return (0);
			if (ft_is_int(argv[i]) == 0)
				return (0);
			if (ft_duplicated(argv, i) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
