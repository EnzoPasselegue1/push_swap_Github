/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:52:27 by enpassel          #+#    #+#             */
/*   Updated: 2024/12/20 16:48:37 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		ft_error();
	if (ft_check_input(argc, argv) == 0)
		ft_error();
	a = ft_process(argc, argv);
	if (!ft_is_sorted(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}
