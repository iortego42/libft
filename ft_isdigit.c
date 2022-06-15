#include "libft.h"

int	ft_isdigit(char	c)
{
	return ((unsigned) c - '0' < 10);
}
