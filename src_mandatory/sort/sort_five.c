/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:41:59 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 20:34:23 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_stacks	*search_value(t_stacks **stack)
{
	t_stacks	*tmp;
	t_stacks	*min;
	int			count_elem;

	min = *stack;
	count_elem = 0;
	while (min)
	{
		tmp = *stack;
		count_elem = 0;
		while (tmp)
		{
			if (min->data <= tmp->data)
				count_elem++;
			tmp = tmp->next;
		}
		if (count_elem == ft_lenlist(*stack))
			return (min);
		min = min->next;
	}
	return (min);
}

static int	steps(t_stacks **stack_a)
{
	int			steps;
	int			count;
	t_stacks	*tmp;

	tmp = *stack_a;
	count = 0;
	steps = 0;
	while (tmp)
	{
		if (tmp == search_value(stack_a))
			break ;
		tmp = tmp->next;
		steps++;
	}
	if (steps > ft_lenlist(*stack_a) / 2)
		return (FALSE);
	return (TRUE);
}

void	sort_five(t_stacks **stack_a, t_stacks **stack_b)
{
	t_stacks	*tmp;
	int			i;

	i = 0;
	while (i < 2)
	{
		tmp = search_value(stack_a);
		while (*stack_a != tmp)
		{
			if (!steps(stack_a))
				rra(stack_a);
			else if (steps(stack_a))
				ra(stack_a);
		}
		pb(stack_a, stack_b);
		i++;
	}
	sort_three(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
	sort_two(stack_a);
}
