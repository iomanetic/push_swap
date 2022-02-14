#include "includes/checker_bonus.h"

static void    status_sort(t_ci **stack_a, t_ci **stack_b, int status)
{
    if (stack_a)
        clear_list(stack_a);
    if (stack_b)
        clear_list(stack_b);
    if (!status)
        ft_putstr_fd(RED KO WHITE, 1);
    else
        ft_putstr_fd(GREEN OK WHITE, 1);
    exit(0);
}

void    check_sort_lst(t_ci **stack_a, t_ci **stack_b)
{
    t_ci    *tmp;

    tmp = *stack_a;
    while (tmp)
    {
        if (tmp->next != NULL && tmp->data > tmp->next->data)
            status_sort(stack_a, stack_b, 0);
        tmp = tmp->next;
    }
    if (!(*stack_b))
        status_sort(stack_a, stack_b, 1);
    else
        status_sort(stack_a, stack_b, 0);
}