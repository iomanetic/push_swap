/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:47:09 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 16:30:36 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker_bonus.h"

t_ci	*ft_lstnew(int data)
{
	t_ci	*elem;
	
	elem = (t_ci *) malloc(sizeof(t_ci));
	if(!elem)
		return (0);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}
