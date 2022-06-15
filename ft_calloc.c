#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		c;
	void	*ptr;
	
	ptr = malloc(count * size);
	if (ptr != NULL)
		while (c < count)
			ptr[c++] = 0;
	return (ptr);
}
