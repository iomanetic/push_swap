/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:41:41 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 20:04:08 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sorts(t_stacks **stack_a, t_stacks **stack_b)
{
	(void)stack_b;
	if (ft_lenlist(*stack_a) == 2)
		sort_two(stack_a);
	else if (ft_lenlist(*stack_a) == 3)
		sort_three(stack_a);
	else if (ft_lenlist(*stack_a) == 4)
		sort_four(stack_a, stack_b);
	else if (ft_lenlist(*stack_a) == 5)
		sort_five(stack_a, stack_b);
	else if (ft_lenlist(*stack_a) > 5)
		big_sort(stack_a, stack_b);
}
