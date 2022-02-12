/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:30:11 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 17:44:16 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_lenlist(t_stacks *stack)
{
	t_stacks	*ptr;
	int			i;

	i = 0;
	ptr = stack;
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
