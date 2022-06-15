#include "libft.h"

int	ft_isspace(char	c)
{
	return ((unsigned)c - 9 < 4 || c == 32);
}
