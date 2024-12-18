#include "push_swap.h"

int ft_is_sorted(t_stack *stack)
{
    int i;

    i = stack->value;
    while (stack)
    {
        if (i > stack->value)
            return (0);
        i = stack->value;
        stack = stack->next;
    }
    return (1);
}