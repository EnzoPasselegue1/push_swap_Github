/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:09:49 by enpassel          #+#    #+#             */
/*   Updated: 2024/12/20 16:48:37 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	last = tmp->next;
	tmp->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	ft_rra(t_stack **a)
{
	ft_reverse_rotate(a);
	ft_putstr("rra\n");
}

void	ft_rrb(t_stack **b)
{
	ft_reverse_rotate(b);
	ft_putstr("rrb\n");
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_putstr("rrr\n");
}
