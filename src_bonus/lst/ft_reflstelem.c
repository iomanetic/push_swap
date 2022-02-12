/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reflstelem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:53:00 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 17:44:20 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker_bonus.h"

t_ci	*ft_refelem(t_ci **stack)
{
	t_ci	*tmp;
	int			i;

	tmp = *stack;
	i = 0;
	while ((i < ft_lenlist(tmp) / 2) && tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
