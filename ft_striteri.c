#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*sindex;

	sindex = s;
	if (!s && !f)
		return (NULL);
	while (*sindex != 0)
		f(sindex - s, sindex);
}
