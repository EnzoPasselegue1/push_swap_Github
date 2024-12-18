#include "push_swap.h"

void ft_push(t_stack **src, t_stack **dst)
{
    t_stack *tmp;

    if (!*src)
        return ;
    tmp = *src;
    *src = (*src)->next;
    tmp->next = *dst;
    *dst = tmp;
}

void ft_pa(t_stack **a, t_stack **b)
{
    ft_push(b, a);
    ft_putstr("pa\n");
}

void ft_pb(t_stack **a, t_stack **b)
{
    ft_push(a, b);
    ft_putstr("pb\n");
}