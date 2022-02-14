/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:08:29 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 17:45:01 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sb(t_stacks **stack)
{
	t_stacks	*tmp_h;
	t_stacks	*tmp;
	t_stacks	*save;

	if ((ft_lenlist(*stack)) < 2)
		return ;
	save = *stack;
	tmp = (*stack)->next->next;
	tmp_h = *stack;
	*stack = (*stack)->next;
	(*stack)->next = tmp_h;
	tmp_h->next = tmp;
	stack = &save;
	write(1, "sb\n", 3);
}
