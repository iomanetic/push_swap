/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:28:27 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 16:31:17 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrb(t_stacks **stack_b)
{
	t_stacks	*tmp_pl;
	t_stacks	*tmp_l;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp_pl = prelast_elem(*stack_b);
	tmp_l = ft_lastelem(*stack_b);
	tmp_l->next = *stack_b;
	tmp_pl->next = NULL;
	*stack_b = tmp_l;
	write(1, "rrb\n", 4);
}
