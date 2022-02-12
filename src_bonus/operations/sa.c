/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:16:17 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 17:44:40 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker_bonus.h"

/* swap first two elem in stack A */
void	sa(t_ci **stack)
{
	t_ci	*tmp_h;
	t_ci	*tmp;
	t_ci	*save;

	if ((ft_lenlist(*stack)) < 2)
		return ;
	save = *stack;
	tmp = (*stack)->next->next;
	tmp_h = *stack;
	*stack = (*stack)->next;
	(*stack)->next = tmp_h;
	tmp_h->next = tmp;
	stack = &save;
}
