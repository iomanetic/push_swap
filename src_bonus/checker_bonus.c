/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:30:12 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 21:31:15 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker_bonus.h"

int    pars_commands(char *line, t_ci **stack_a, t_ci **stack_b)
{
    if (!ft_strcmp(line, "pa\n"))
        pa(stack_b, stack_a);
    else if (!ft_strcmp(line, "pb\n"))
        pb(stack_a, stack_b);
    else if (!ft_strcmp(line, "ra\n"))
        ra(stack_a);
    else if (!ft_strcmp(line, "rb\n"))
        rb(stack_b);
    else if (!ft_strcmp(line, "rr\n"))
        rr(stack_a, stack_b);
    else if (!ft_strcmp(line, "rra\n"))
        rra(stack_a);
    else if (!ft_strcmp(line, "rrb\n"))
        rrb(stack_b);
    else if (!ft_strcmp(line, "rrr\n"))
        rrr(stack_a, stack_b);
    else if (!ft_strcmp(line, "sa\n"))
        sa(stack_a);
    else if (!ft_strcmp(line, "sb\n"))
        sb(stack_b);
    else if (!ft_strcmp(line, "ss\n"))
        ss(stack_a, stack_b);
    else
        return (FALSE);
    return (TRUE);
}

void	accept_input(t_ci **stack_a, t_ci **stack_b)
{
    char    *line;

    while (1)
    {
        if(get_next_line(2))
            exit(0);
        line = get_next_line(0);
        if (!line)
            return ;
        if (!pars_commands(line, stack_a, stack_b))
            ft_error(stack_a, stack_b, FALSE);
        free(line);
    }
}

int main(int argc, char **argv)
{
    t_ci    *stack_a;
    t_ci    *stack_b;

    stack_a = NULL;
    stack_b = NULL;
    (void)argc;
    main_validation(&argv[1], &stack_a);
    if(ft_lenlist(stack_a) < 1)
    {
        clear_list(&stack_a);
        return (FALSE);
    }
    main_check_dup(&stack_a);
    accept_input(&stack_a, &stack_b);
    check_sort_lst(&stack_a, &stack_b);
    clear_list(&stack_a);
	return (0);
}