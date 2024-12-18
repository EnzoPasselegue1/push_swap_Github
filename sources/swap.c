#include "push_swap.h"

void    ft_swap(t_stack *stack)
{
    t_stack	*tmp;

	if (!stack || !((stack)->next))
		return ;
	tmp = stack;
	stack = (stack)->next;
	tmp->next = (stack)->next;
	(stack)->next = tmp;
}

void   ft_sa(t_stack **a)
{
    ft_swap(*a);
    ft_putstr("sa\n");
}

void   ft_sb(t_stack **b)
{
    ft_swap(*b);
    ft_putstr("sb\n");
}

void  ft_ss(t_stack **a, t_stack **b)
{
    ft_swap(*a);
    ft_swap(*b);
    ft_putstr("ss\n");
}