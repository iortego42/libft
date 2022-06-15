#include "libft.h"

int ft_atoi(char	*c)
{
	int	ret;
	int	sing;

	ret = 0;
	sing = 1;
	while (ft_isspace(*c))
		c++;
	if (c == '-')
		sing *= -1;
	while (ft_isdigit(*c))
		ret = 10 * ret + c++ - '0';
	return (ret * sing);
}

