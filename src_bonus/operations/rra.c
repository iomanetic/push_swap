/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:33:37 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 16:31:13 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker_bonus.h"

/* last elem becoming first in stack A */
void	rra(t_ci **stack_a)
{
	t_ci	*tmp_pl;
	t_ci	*tmp_l;

	if (ft_lenlist(*stack_a) < 2)
		return ;
	tmp_pl = prelast_elem(*stack_a);
	tmp_l = ft_lastelem(*stack_a);
	tmp_l->next = *stack_a;
	tmp_pl->next = NULL;
	*stack_a = tmp_l;
}
