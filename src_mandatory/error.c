#include "includes/push_swap.h"

void	clear_list(t_stacks **stack_a)
{
	t_stacks	*tmp;

	if(stack_a)
	{
		tmp = *stack_a;
		while (*stack_a)
		{
			*stack_a = (*stack_a)->next;
			free(tmp);
			tmp = *stack_a;
		}
		free((*stack_a));
	}
}

void	ft_error(t_stacks **stack_a, t_stacks **stack_b, char **tmp)
{
	int i;

	i = 0;
	if(stack_a)
		clear_list(stack_a);
	if(stack_b)
		clear_list(stack_b);
	if(tmp)
	{
		while(tmp[i])
			free(tmp[i++]);
		free(tmp);
	}
	ft_putstr_fd(ERROR, 2);
	exit(FALSE);
}