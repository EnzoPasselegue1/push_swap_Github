/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:33:14 by enpassel          #+#    #+#             */
/*   Updated: 2024/12/20 16:53:37 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_stack	*ft_create_stack(int argc, char **argv)
{
	t_stack	*stack;
	t_stack	*tmp;
	int		i;

	i = 1;
	stack = NULL;
	while (i < argc)
	{
		tmp = malloc(sizeof(t_stack));
		if (!tmp)
			ft_error();
		tmp->value = ft_atoi(argv[i]);
		tmp->index = i - 1;
		tmp->next = stack;
		tmp->prev = NULL;
		if (stack)
			stack->prev = tmp;
		stack = tmp;
		i++;
	}
	return (stack);
}

size_t	ft_get_stack_size(t_stack *stack)
{
	t_stack	*tmp;
	size_t	size;

	tmp = stack;
	size = 0;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}

t_stack	*ft_stack_new(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		ft_error();
	new->value = content;
	new->next = NULL;
	return (new);
}

void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lstlast(*stack))->next = stack_new;
}
