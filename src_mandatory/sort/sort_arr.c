/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:13:10 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 20:40:19 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static int	check_sort_arr(int *arr, t_stacks *stack_a)
{
	int	i;

	i = 0;
	while (i < ft_lenlist(stack_a) - 1)
	{
		if (arr[i] > arr[i + 1])
			return (FALSE);
		i++;
	}
	return (TRUE);
}

void	arr_sort(int **array, t_stacks *stack_a)
{
	int	i;

	i = 0;
	while (!check_sort_arr(*array, stack_a))
	{
		i = 0;
		while (i < ft_lenlist(stack_a) - 1)
		{
			if ((*array)[i] > (*array)[i + 1])
				swap(&(*array)[i], &(*array)[i + 1]);
			i++;
		}
	}
}
