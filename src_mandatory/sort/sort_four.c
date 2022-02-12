/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:28:17 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 17:47:54 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	steps_to_min(t_stacks *stack)
{
	int	steps;
	int	min;

	min = min_value(&stack);
	steps = 0;
	while (stack->data != min)
	{
		steps++;
		stack = stack->next;
	}
	if (steps > (ft_lenlist(stack) / 2))
		return (FALSE);
	return (TRUE);
}

void	sort_four(t_stacks **stack_a, t_stacks **stack_b)
{
	int	min;

	min = min_value(stack_a);
	while ((*stack_a)->data != min)
	{
		if (steps_to_min(*stack_a))
			ra(stack_a);
		else if (!steps_to_min(*stack_a))
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_b, stack_a);
}
