/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:11:01 by enpassel          #+#    #+#             */
/*   Updated: 2024/12/20 13:11:02 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	long			value;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void				ft_swap(t_stack *stack);
void				ft_putstr(char *str);
int					ft_atoi(char *str);
t_stack				*ft_create_stack(int argc, char **argv);
int					ft_is_sorted(t_stack *stack);
int					ft_find_index(t_stack *a, int nbr);
int					ft_find_place_a(t_stack *a, int nbr);
int					ft_find_place_b(t_stack *b, int nbr);
void				ft_sort(t_stack **a);
void				ft_free(t_stack **stack);
void				ft_freestr(char **lst);
void				ft_error(void);
void				ft_push(t_stack **src, t_stack **dst);
t_stack				*ft_lstlast(t_stack *lst);
t_stack				*ft_lstlast(t_stack *lst);
int					ft_is_sorted(t_stack *stack);
int					ft_lstsize(t_stack *lst);
int					ft_max(t_stack *stack);
int					ft_min(t_stack *stack);
void				ft_sort_b_3(t_stack **a, t_stack **b);
void				ft_sort_3(t_stack **a);
t_stack				*ft_sort_b(t_stack **a);
void				ft_sort(t_stack **a);
t_stack				*ft_algorithm(int argc, char **argv);
size_t				ft_get_stack_size(t_stack *stack);
int					main(int argc, char **argv);
t_stack				*ft_process(int argc, char **argv);
int					ft_isdigit(int c);
char				**ft_split(char const *s, char c);
t_stack				*ft_stack_new(int content);
void				ft_add_back(t_stack **stack, t_stack *stack_new);

void				ft_sa(t_stack **a);
void				ft_sb(t_stack **b);
void				ft_ss(t_stack **a, t_stack **b);
void				ft_pa(t_stack **a, t_stack **b);
void				ft_pb(t_stack **a, t_stack **b);
void				ft_ra(t_stack **a);
void				ft_rb(t_stack **b);
void				ft_rr(t_stack **a, t_stack **b);
void				ft_rra(t_stack **a);
void				ft_rrb(t_stack **b);
void				ft_rrr(t_stack **a, t_stack **b);

int					ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rrarb_a(t_stack *a, t_stack *b, int c);

int					ft_case_rarb(t_stack *a, t_stack *b, int c);
int					ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int					ft_case_rrarb(t_stack *a, t_stack *b, int c);
int					ft_case_rarrb(t_stack *a, t_stack *b, int c);

int					ft_rotate_type_ab(t_stack *a, t_stack *b);
int					ft_rotate_type_ba(t_stack *a, t_stack *b);
int					ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);

#endif