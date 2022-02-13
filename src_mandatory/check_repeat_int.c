/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_repeat_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:31:26 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 20:34:58 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static void	search_repeat(t_stacks **stack_a, t_stacks *jump, int data)
{
	t_stacks	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp == jump)
			tmp = tmp->next;
		else
		{
			if (tmp->data == data)
				ft_error(stack_a, FALSE, FALSE);
			tmp = tmp->next;
		}
	}
}

int	check_sortlst(t_stacks **stack_a)
{
	t_stacks	*tmp_sort;
	int			count_elem;

	count_elem = 0;
	tmp_sort = *stack_a;
	while (tmp_sort)
	{
		if (tmp_sort->next && tmp_sort->data < tmp_sort->next->data)
		{
			tmp_sort = tmp_sort->next;
			count_elem++;
		}
		else
			break ;
	}
	if (ft_lenlist(*stack_a) == count_elem + 1)
		return (TRUE);
	return (FALSE);
}

void	check_repeat(t_stacks **stack_a)
{
	t_stacks	*tmp_repeat;
	t_stacks	*tmp_sort;
	int			count_elem;

	tmp_repeat = *stack_a;
	tmp_sort = *stack_a;
	count_elem = 0;
	while (tmp_repeat)
	{
		search_repeat(stack_a, tmp_repeat, tmp_repeat->data);
		tmp_repeat = tmp_repeat->next;
	}
	if (check_sortlst(stack_a))
	{
		clear_list(stack_a);
		exit(0);
	}
}
