#include "libft.h"

long long int   ft_latoi(const char *str)
{
	long long int   output;
	long long int   result;

	result = 1;
	output = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		result = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		output = (output * 10) + (*str - 48);
		++str;
	}
	return (output * result);
}