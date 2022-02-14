/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:04:02 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 16:31:02 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker_bonus.h"

void	ra(t_ci **stack_a)
{
	t_ci	*p_tmp;
	t_ci	*tmp_l;
	t_ci	*tmp_h;

	if (ft_lenlist(*stack_a) < 2)
		return ;
	tmp_h = *stack_a;
	tmp_l = ft_lastelem(*stack_a);
	p_tmp = (*stack_a)->next;
	tmp_l->next = tmp_h;
	tmp_h->next = NULL;
	*stack_a = p_tmp;
}
