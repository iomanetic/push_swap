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

int	*new_arr(t_stacks *stack_b, int *arr)
{
	int	d;

	if (!stack_b || !arr)
		return (FALSE);
	d = 0;
	while (stack_b)
	{
		arr[d] = stack_b->data;
		stack_b = stack_b->next;
		d++;
	}
	return (arr);
}

int	sort_steps(t_stacks **stack_b, int max_value, int size)
{
	int		z;
	int		*arr;

	arr = malloc(sizeof(int) * (size + 1));
	if (!arr)
		return (FALSE);
	arr = new_arr(*stack_b, arr);
	z = size;
	while (arr[size] != max_value)
		size--;
	z = z - size;
	size = 0;
	while (arr[size] != max_value)
		size++;
	free(arr);
	if (z < size)
		return (TRUE);
	return (FALSE);
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
