/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:09:47 by enpassel          #+#    #+#             */
/*   Updated: 2024/12/20 13:11:48 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	ft_pa(t_stack **a, t_stack **b)
{
	ft_push(b, a);
	ft_putstr("pa\n");
}

void	ft_pb(t_stack **a, t_stack **b)
{
	ft_push(a, b);
	ft_putstr("pb\n");
}
