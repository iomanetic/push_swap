/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:08:52 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 20:35:18 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static int	*burn_arr(t_stacks **stack)
{
	int			i;
	int			*arr;
	t_stacks	*tmp;

	i = 0;
	tmp = *stack;
	arr = (int *) malloc(sizeof(int) * (ft_lenlist(*stack)));
	while (i < ft_lenlist(*stack))
	{
		arr[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	return (arr);
}

static void	burn_order(t_stacks **stack, int **arr)
{
	t_stacks	*tmp;
	int			i;

	i = 0;
	while (i < ft_lenlist(*stack))
	{
		tmp = *stack;
		while (tmp)
		{
			if (tmp->data == (*arr)[i])
			{
				tmp->order = i;
				break ;
			}
			tmp = tmp->next;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int			*arr;
	t_stacks	*stack_a;
	t_stacks	*stack_b;

	(void)argc;
	stack_a = NULL;
	stack_b = NULL;
	if(argc > 1)
	{
		params_validation(&stack_a, &argv[1]);
		check_repeat(&stack_a);
		arr = burn_arr(&stack_a);
		arr_sort(&arr, stack_a);
		burn_order(&stack_a, &arr);
		ft_sorts(&stack_a, &stack_b);
		clear_list(&stack_a);
		free(arr);
		arr = NULL;
	}
	return (0);
}
