/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:09:02 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 16:31:06 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rb(t_stacks **stack_b)
{
	t_stacks	*p_tmp;
	t_stacks	*tmp_l;
	t_stacks	*tmp_h;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp_h = *stack_b;
	p_tmp = tmp_h->next;
	tmp_l = ft_lastelem(*stack_b);
	tmp_l->next = tmp_h;
	tmp_h->next = NULL;
	*stack_b = p_tmp;
	write(1, "rb\n", 3);
}
