/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:52:27 by enpassel          #+#    #+#             */
/*   Updated: 2024/12/20 16:14:10 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


size_t  ft_strlen_2d(char **str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *word_dup(const char *str, int start, int finish)
{
    char *word;
    int i;

    i = 0;
    word = malloc((finish - start + 1) * sizeof(char));
    while (start < finish)
        word[i++] = str[start++];
    word[i] = '\0';
    return (word);
}

int count_words(const char *str, char c)
{
    int i;
    int trigger;

    i = 0;
    trigger = 0;
    while (*str)
    {
        if (*str != c && trigger == 0)
        {
            trigger = 1;
            i++;
        }
        else if (*str == c)
            trigger = 0;
        str++;
    }
    return (i);
}

char **ft_split_argv(char *s, char c)
{
    size_t i;
    size_t j;
    int index;
    char **split;

    split = malloc((count_words(s, c) + 2) * sizeof(char *));
    if (!s || !split)
        return (0);
    i = 0;
    j = 1;
    index = -1;
    split[0] = "./push_swap";
    while (i <= ft_strlen(s))
    {
        if (s[i] != c && index < 0)
            index = i;
        else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
        {
            split[j++] = word_dup(s, index, i);
            index = -1;
        }
        i++;
    }
    split[j] = 0;
    return (split);
}

void ft_freestr_arg(char **lst)
{
    char *n1;

    if (!lst)
        return ;
    while (*lst)
    {
        n1 = *lst;
        lst++;
        free(n1);
    }
    free(lst);
}

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		ft_error();
    if (argc == 2)
    {
        argv[0] = "./push_swap";
        argv = ft_split_argv(argv[1], ' ');
        argc = ft_strlen_2d(argv);
    }
    int i = 0;
    while(argv[i])
    {
        printf("argv[%d]: %s\n", i, argv[i]);
        i++;
    }
    printf("argc: %d\n", argc);
    if (ft_check_input(argc, argv) == 0)
        ft_error();
    a = ft_process(argc, argv);
    if (!ft_is_sorted(a))
		ft_sort(&a);
    ft_free(&a);
    
	return (0);
}
