/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:50:45 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 20:34:39 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_maxvalue(t_stacks *stack)
{
	if (stack->data > stack->next->data
		&& stack->data > stack->next->next->data)
		return (1);
	if (stack->next->data > stack->data
		&& stack->next->data > stack->next->next->data)
		return (2);
	if (stack->next->next->data > stack->next->data
		&& stack->next->next->data > stack->data)
		return (3);
	return (FALSE);
}

void	sort_three(t_stacks **stack)
{
	int	max_value;

	max_value = ft_maxvalue(*stack);
	if (max_value == 1)
	{
		ra(stack);
		if ((*stack)->data > (*stack)->next->data)
			sa(stack);
		return ;
	}
	if (max_value == 2)
	{
		rra(stack);
		if ((*stack)->data > (*stack)->next->data)
			sa(stack);
		return ;
	}
	if (max_value == 3)
	{
		if ((*stack)->data > (*stack)->next->data)
			sa(stack);
		return ;
	}
}
