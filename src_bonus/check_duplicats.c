#include "includes/checker_bonus.h"

void    check_duplicats(t_ci **stack_a, t_ci *jump, int data)
{
    t_ci    *tmp;

    tmp = *stack_a;
    while (tmp)
    {
        if (tmp == jump)
            tmp = tmp->next;
        else
        {
            if (tmp->data == data)
                ft_error(stack_a, FALSE, FALSE);
            else
                tmp = tmp->next;
        }
    }
}

void    main_check_dup(t_ci **stack_a)
{
    t_ci    *tmp;

    tmp = *stack_a;
    while (tmp)
    {
       check_duplicats(stack_a, tmp, tmp->data);
       tmp = tmp->next;
    }
}