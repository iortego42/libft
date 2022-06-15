#include "libft.h"

int	ft_isalpha(char	c)
{
	return ((unsigned) c - 97 < 26 || (unsigned) c - 65 < 26);
}
