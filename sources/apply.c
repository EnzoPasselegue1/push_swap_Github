/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:55:09 by enpassel          #+#    #+#             */
/*   Updated: 2024/12/17 11:49:05 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_apply_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && ft_find_place_b(*b, c) > 0)
			ft_rr(a, b);
		while ((*a)->value != c)
			ft_ra(a);
		while (ft_find_place_b(*b, c) > 0)
			ft_rb(b);
		ft_pb(a, b);
	}
	else
	{
        write (1, "je suis la5\n", 12);
		while ((*b)->value != c && ft_find_place_a(*a, c) > 0)
			ft_rr(a, b);
		while ((*b)->value != c)
			ft_rb(b);
		while (ft_find_place_a(*a, c) > 0)
			ft_ra(a);
		ft_pa(a, b);
	}
	return (-1);
}

int			ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && ft_find_place_b(*b, c) > 0)
			ft_rrr(a, b);
		while ((*a)->value != c)
			ft_rra(a);
		while (ft_find_place_b(*b, c) > 0)
			ft_rrb(b);
		ft_pb(a, b);
	}
	else
	{
        write (1, "je suis la2\n", 12);
		while ((*b)->value != c && ft_find_place_a(*a, c) > 0)
			ft_rrr(a, b);
		while ((*b)->value != c)
			ft_rrb(b);
		while (ft_find_place_a(*a, c) > 0)
			ft_rra(a);
		ft_pa(a, b);
	}
	return (-1);
}

int			ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			ft_rra(a);
		while (ft_find_place_b(*b, c) > 0)
			ft_rb(b);
		ft_pb(a, b);
	}
	else
	{
        write (1, "je suis la3\n", 12);
		while (ft_find_place_a(*a, c) > 0)
			ft_rra(a);
		while ((*b)->value != c)
			ft_rb(b);
		ft_pa(a, b);
	}
	return (-1);
}

int			ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			ft_ra(a);
		while (ft_find_place_b(*b, c) > 0)
			ft_rrb(b);
		ft_pb(a, b);
	}
	else
	{
        write (1, "je suis la4\n", 12);
		while (ft_find_place_a(*a, c) > 0)
			ft_ra(a);
		while ((*b)->value != c)
			ft_rrb(b);
		ft_pa(a, b);
	}
	return (-1);
}