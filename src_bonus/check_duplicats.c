#include "includes/checker_bonus.h"

void    error_duplicats(t_ci **stack_a)
{
    clear_lst(stack_a);
    ft_putstr_fd(STANDART_ERROR, 1);
    exit(FALSE);
}

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
                error_duplicats(stack_a);
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