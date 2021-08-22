#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	zn;
	int	i;

	zn = 0;
	num = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f' )
		i++;
	if (str[i] == '-')
		zn = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	if (zn == 1)
		return (-num);
	return (num);
}
