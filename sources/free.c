#include "push_swap.h"

void    ft_free(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		(*stack)->value = 0;
		free(*stack);
		*stack = tmp;
	}
}

void    ft_error(void)
{
    ft_putstr("Error\n");
    exit(1);
}
