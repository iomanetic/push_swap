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

#include "../includes/checker_bonus.h"

/* last elem becoming first in stack B */
void	rrb(t_ci **stack_b)
{
	t_ci	*tmp_pl;
	t_ci	*tmp_l;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp_pl = prelast_elem(*stack_b);
	tmp_l = ft_lastelem(*stack_b);
	tmp_l->next = *stack_b;
	tmp_pl->next = NULL;
	*stack_b = tmp_l;
}
