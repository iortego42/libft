#include "libft.h"
int	ft_isalpha(char	c)
{
	return ((unsigned) c  - 33 < 94);
}
