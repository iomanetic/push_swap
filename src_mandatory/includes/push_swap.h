/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:10:09 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 16:49:07 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "defines.h"
# include "structs.h"
# include "../../libs/libft/libft.h"

# ifndef LISTS
#  define LISTS

t_stacks	*ft_lstnew(int data);
void		ft_pushback(t_stacks **lst, t_stacks *elem);
int			ft_lenlist(t_stacks *stack);
void		ft_addlstfront(t_stacks **lst, t_stacks *elem);
t_stacks	*ft_lastelem(t_stacks *elem);
t_stacks	*prelast_elem(t_stacks *stack);
t_stacks	*ft_refelem(t_stacks **stack);
void		clear_list(t_stacks **stack_a);
# endif

# ifndef OPERATIONS
#  define OPERATIONS

void		sa(t_stacks **stack);
void		sb(t_stacks **stack);
void		ss(t_stacks **stack_a, t_stacks **stack_b);
void		pb(t_stacks **stack_a, t_stacks **stack_b);
void		pa(t_stacks **stack_b, t_stacks **stack_a);
void		ra(t_stacks **stack_a);
void		rb(t_stacks **stack_b);
void		rr(t_stacks **stack_a, t_stacks **stack_b);
void		rra(t_stacks **stack_a);
void		rrb(t_stacks **stack_b);
void		rrr(t_stacks **stack_a, t_stacks **stack_b);
# endif

# ifndef SORT_FUNCS
#  define SORT_FUNCS

void		arr_sort(int **array, t_stacks *stack_a);
void		sort_two(t_stacks **stack);
void		sort_three(t_stacks **stack_a);
void		sort_four(t_stacks **stack_b, t_stacks **stack_a);
void		sort_five(t_stacks **stack_a, t_stacks **stack_b);
void		big_sort(t_stacks **stack_a, t_stacks **stack_b);
void		ft_sorts(t_stacks **stack_a, t_stacks **stack_b);
# endif

# ifndef SORT_UTILS
#  define SORT_UTILS

int			*new_arr(t_stacks *stack_b, int *arr);
int			sort_steps(t_stacks **stack_b, int max_value, int size);
int			max_value(t_stacks **stack_b);
int			min_value(t_stacks **stack_b);
# endif

# ifndef PROGRAMM_SRC
#  define PROGRAMM_SRC

void		params_validation(t_stacks **stack_a, char **ag);
void	    check_repeat(t_stacks **stack_a);
# endif

#endif