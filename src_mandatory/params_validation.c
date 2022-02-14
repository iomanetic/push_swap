/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   params_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:21:44 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 20:54:41 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static void	main_validation(t_stacks **stack_a, char **tmp)
{
	int	i;
	int	j;

	i = 0;
	while(tmp[i])
	{
		j = 0;
		if(tmp[i][0] == '-' && tmp[i][1] == '\0')
			ft_error(stack_a, FALSE, tmp);
		if(tmp[i][0] == '-')
			j++;
		while(tmp[i][j])
		{
			if(!ft_isdigit(tmp[i][j]))
				ft_error(stack_a, FALSE, tmp);
			j++;
		}
		if(ft_latoi(tmp[i]) < -2147483648
			|| ft_latoi(tmp[i]) > 2147483647)
			ft_error(stack_a, FALSE, tmp);
		i++;
	}
}

void    check_space(char *ag, t_stacks **stack_a, char **tmp)
{
    int i;
    int spaces;

    spaces = 0;
    i = 0;
    while(ag[i])
    {
        if(ag[i] == ' ')
            spaces++;
        i++;
    }
    if(spaces == (int)ft_strlen(ag))
        ft_error(stack_a, FALSE, tmp);
    return ;
}

 
		i++;
	}
}
