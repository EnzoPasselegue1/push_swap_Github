#include "push_swap.h"

int ft_find_index(t_stack *a, int nbr)
{
	int		i;

	i = 0;
	while (a->value != nbr)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

int ft_find_place_a(t_stack *a, int nbr)
{
    int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr < a->value && nbr > ft_lstlast(a)->value)
		i = 0;
	else if (nbr > ft_max(a) || nbr < ft_min(a))
		i = ft_find_index(a, ft_min(a));
	else
	{
		tmp = a->next;
		while (a->value > nbr || tmp->value < nbr)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}

int ft_find_place_b(t_stack *b, int number)
{
    int		i;
    t_stack	*tmp;

    i = 1;
    if (number > b->value && number < ft_lstlast(b)->value)
        i = 0;
    else if (number > ft_max(b) || number < ft_min(b))
        i = ft_find_index(b, ft_max(b));
    else
    {
        tmp = b->next;
        while (b->value < number || tmp->value > number)
        {
            b = b->next;
            tmp = b->next;
            i++;
        }
    }
    return (i);
}