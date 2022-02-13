#include "includes/checker_bonus.h"

static void string_validation(char **tmp, t_ci **stack_a)
{
    int i;
    int j;

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
        if(ft_latoi(tmp[i]) > 2147483647
            || ft_latoi(tmp[i]) < -2147483648)
            ft_error(stack_a, FALSE, tmp);
        i++;
    }
}

void    check_space(char *ag, t_ci **stack_a, char **tmp)
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

void    main_validation(char **ag, t_ci **stack_a)
{
    int     i;
    int     j;
    char    **tmp;

    i = 0;
    while(ag[i])
    {
        j = 0;
        if(ag[i][j] == '\0')
            ft_error(stack_a, FALSE, FALSE);
        check_space(ag[i], stack_a, tmp);
        tmp = ft_split(ag[i], ' ');
        string_validation(tmp, stack_a);
        while(tmp[j])
        {
            ft_pushback(stack_a, ft_lstnew(ft_atoi(tmp[j])));
            free(tmp[j]);
            j++;
        }
        free(tmp);
        i++;
    }
}