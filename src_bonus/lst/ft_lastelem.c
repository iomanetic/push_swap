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

#include "../includes/checker_bonus.h"

t_ci	*ft_lastelem(t_ci *elem)
{
	t_ci	*ptr;

	ptr = elem;
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
