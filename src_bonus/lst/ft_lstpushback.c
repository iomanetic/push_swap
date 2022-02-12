/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:58:29 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 16:33:28 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker_bonus.h"

void	ft_pushback(t_ci **lst, t_ci *elem)
{
	t_ci	*ptr;

	if (lst)
	{
		ptr = *lst;
		if (*lst)
		{
			while (ptr->next)
				ptr = ptr->next;
			ptr->next = elem;
		}
		else
			*lst = elem;
	}
}
