#include "../includes/checker_bonus.h"

void	clear_lst(t_ci **stack_a)
{
	t_ci	*tmp;

	tmp = *stack_a;
	while (*stack_a)
	{
		*stack_a = (*stack_a)->next;
		free(tmp);
		tmp = *stack_a;
	}
	free((*stack_a));
}