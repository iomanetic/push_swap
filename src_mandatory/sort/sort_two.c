/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:46:10 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 17:49:07 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_two(t_stacks **stack)
{
	if (!*stack)
		return ;
	if ((*stack)->data > (*stack)->next->data)
		sa(stack);
	return ;
}
