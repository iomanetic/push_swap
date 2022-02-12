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

#include "../includes/push_swap.h"

void	ft_pushback(t_stacks **lst, t_stacks *elem)
{
	t_stacks	*ptr;
	if(!elem)
		return ;
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
