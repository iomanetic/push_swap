/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prelastelem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:31:34 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 16:30:43 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker_bonus.h"

t_ci	*prelast_elem(t_ci *stack)
{
	t_ci	*t_ptr;

	t_ptr = stack;
	while (t_ptr->next->next)
		t_ptr = t_ptr->next;
	return (t_ptr);
}
