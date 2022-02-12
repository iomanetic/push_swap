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

#include "../includes/push_swap.h"

t_stacks	*ft_lstnew(int data)
{
	t_stacks	*elem;
	
	elem = (t_stacks *) malloc(sizeof(t_stacks));
	if(!elem)
		return (0);
	elem->data = data;
	elem->order = 0;
	elem->next = NULL;
	return (elem);
}
