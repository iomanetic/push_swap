/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:19:20 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 20:32:59 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_steps(t_stacks **stack_b)
{
	t_stacks	*tmp;
	int			med;
	int			count;

	med = ft_lenlist(*stack_b) / 2;
	tmp = *stack_b;
	count = 0;
	while (tmp->data != max_value(stack_b))
	{
		tmp = tmp->next;
		count++;
	}
	if (count < med)
		return (0);
	return (1);
}

int	max_value(t_stacks **stack_b)
{
	int			max_value;
	t_stacks	*tmp;

	tmp = *stack_b;
	max_value = tmp->data;
	while (tmp)
	{
		if (max_value < tmp->data)
			max_value = tmp->data;
		tmp = tmp->next;
	}
	return (max_value);
}

int	min_value(t_stacks **stack_b)
{
	int			min_value;
	t_stacks	*tmp;

	tmp = *stack_b;
	min_value = tmp->data;
	while (tmp)
	{
		if (min_value > tmp->data)
			min_value = tmp->data;
		tmp = tmp->next;
	}
	return (min_value);
}
