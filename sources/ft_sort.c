#include "push_swap.h"

void ft_sort_b_3(t_stack **a, t_stack **b)
{
    int i;
    t_stack *tmp;

    while (ft_lstsize(*a) > 3 && !ft_is_sorted(*a))
    {
        tmp = *a;
        i = ft_rotate_type_ab(*a, *b);
        while(i >= 0)
        {

            if(ft_case_rarb(*a, *b, tmp->value) == i)
                i = ft_apply_rarb(a, b, tmp->value, 'a');
            else if(ft_case_rrarrb(*a, *b, tmp->value) == i)
                i = ft_apply_rrarrb(a, b, tmp->value, 'a');
            else if(ft_case_rarrb(*a, *b, tmp->value) == i)
                i = ft_apply_rarrb(a, b, tmp->value, 'a');
            else if(ft_case_rrarb(*a, *b, tmp->value) == i)
                i = ft_apply_rrarb(a, b, tmp->value, 'a');
            else
                tmp = tmp->next;
        }
    }
}

void ft_sort_3(t_stack **a)
{
    if(ft_min(*a) == (*a)->value)
    {
        ft_rra(a);
        ft_sa(a);
    }
    else if(ft_max(*a) == (*a)->value)
    {
        ft_ra(a);
        if (ft_is_sorted(*a) == 0)
            ft_sa(a);
    }   
    else
        if(ft_find_index(*a, ft_max(*a)) == 1)
        {
            ft_rra(a);
        }
        else
            ft_sa(a);
}

t_stack	*ft_sort_b(t_stack **a)
{
    t_stack *b;

    b = NULL;
    if(ft_lstsize(*a) > 3 && !ft_is_sorted(*a))
        ft_pb(a, &b);
    if(ft_lstsize(*a) > 3 && !ft_is_sorted(*a))
        ft_pb(a, &b);
    if(ft_lstsize(*a) > 3 && !ft_is_sorted(*a))
        ft_sort_b_3(a, &b);
    if(!ft_is_sorted(*a))
        ft_sort_3(a);
    write(1, "there is the end of b\n", 22);
    return (b);
}

t_stack	**ft_sort_a(t_stack **a, t_stack **b)
{
    int i;
    t_stack *tmp;

    while(*b)
    {
        tmp = *b;
        i = ft_rotate_type_ba(*a, *b);
        while(i >= 0)
        {
            if(i == ft_case_rarb_a(*a, *b, tmp->value))
                i = ft_apply_rarb(a, b, tmp->value, 'b');
            else if(i == ft_case_rarrb_a(*a, *b, tmp->value))
                i = ft_apply_rarrb(a, b, tmp->value, 'b');
            else if(i == ft_case_rrarrb_a(*a, *b, tmp->value))
                i = ft_apply_rrarrb(a, b, tmp->value, 'b');
            else if(i == ft_case_rrarb_a(*a, *b, tmp->value))
                i = ft_apply_rrarb(a, b, tmp->value, 'b');
            else
                tmp = tmp->next;
        }
    }
    write(1, "there is the end of a\n", 22);
    return (a);
}

void ft_sort(t_stack **a)
{
    t_stack *b;
    int i;

    b = NULL;
    if(ft_lstsize(*a) == 2)
        ft_sa(a);
    else 
    {
        b = ft_sort_b(a);
        a = ft_sort_a(a, &b);
        i = ft_find_index(*a, ft_min(*a));
        if(i < ft_lstsize(*a) - i)
            while((*a)->value != ft_min(*a))
                ft_ra(a);
        else
            while((*a)->value != ft_min(*a))
                ft_rra(a);
    }
}