/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:31:54 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 21:30:18 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include "../../libs/libft/libft.h"
# include "defines_bonus.h"
# include "structs_bonus.h"
# include "../projects/get_next_line/get_next_line.h"

# ifndef OPERATIONS
#  define OPERATIONS

void	    pa(t_ci **stack_b, t_ci **stack_a);
void	    pb(t_ci **stack_a, t_ci **stack_b);
void	    ra(t_ci **stack_a);
void	    rb(t_ci **stack_b);
void	    rr(t_ci **stack_a, t_ci **stack_b);
void	    rra(t_ci **stack_a);
void	    rrb(t_ci **stack_b);
void	    rrr(t_ci **stack_a, t_ci **stack_b);
void	    sa(t_ci **stack);
void	    sb(t_ci **stack);
void	    ss(t_ci **stack_a, t_ci **stack_b);
#endif

# ifndef LISTS
#  define LISTS

void	    ft_pushback(t_ci **lst, t_ci *elem);
int	        ft_lenlist(t_ci *lst);
t_ci        *ft_lstnew(int data);
void        clear_lst(t_ci **lst);
t_ci	    *ft_refelem(t_ci **stack);
t_ci	    *prelast_elem(t_ci *stack);
t_ci	    *ft_lastelem(t_ci *elem);
#endif

# ifndef MAIN_FUNC
#  define MAIN_FUNC

void    main_validation(char **ag, t_ci **stack_a);
void    check_sort_lst(t_ci **stack_a, t_ci **stack_b);
void    main_check_dup(t_ci **stack_a);
#endif

#endif