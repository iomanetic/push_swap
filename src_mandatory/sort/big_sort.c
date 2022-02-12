/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:57:08 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 17:45:30 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_stack_b(t_stacks **stack_b, t_stacks **stack_a)
{
	while (*stack_b)
	{
		if (!(*stack_b))
			break ;
		if ((*stack_b)->data != max_value(stack_b)
			&& !sort_steps(stack_b, max_value(stack_b), ft_lenlist(*stack_b)))
			rb(stack_b);
		else if ((*stack_b)->data != max_value(stack_b)
			&& sort_steps(stack_b, max_value(stack_b), ft_lenlist(*stack_b)))
			rrb(stack_b);
		else if ((*stack_b)->data == max_value(stack_b))
			pa(stack_b, stack_a);
	}
}

static void	ft_sort(t_stacks **stack_a, t_stacks **stack_b, int action)
{
	int	count;

	count = 0;
	while ((*stack_a))
	{
		if (count > 1 && (*stack_a)->order <= count)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			count++;
		}
		else if ((*stack_a)->order <= (count + action))
		{
			pb(stack_a, stack_b);
			count++;
		}
		else if ((*stack_a)->order >= count)
			ra(stack_a);
	}
	ft_stack_b(stack_b, stack_a);
}

void	big_sort(t_stacks **stack_a, t_stacks **stack_b)
{
	if (ft_lenlist(*stack_a) <= 100)
		ft_sort(stack_a, stack_b, 15);
	else
		ft_sort(stack_a, stack_b, 30);
}
