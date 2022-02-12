/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastelem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:11:38 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 17:44:10 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stacks	*ft_lastelem(t_stacks *elem)
{
	t_stacks	*ptr;

	ptr = elem;
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
