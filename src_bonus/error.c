#include "includes/checker_bonus.h"

void	clear_list(t_ci **stack)
{
	t_ci	*tmp;

	tmp = *stack;
	while (*stack)
	{
		*stack = (*stack)->next;
		free(tmp);
		tmp = *stack;
	}
	free((*stack));
}

void	ft_error(t_ci **stack_a, t_ci **stack_b, char **tmp)
{
	int	i;

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
	exit (FALSE);
}