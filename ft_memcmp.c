#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	int	count;
	int	ret;
	unsigned char *ptr;
	unsigned char *pun;

	ret = 0;
	ptr = (unsigned char *)s2;
	pun = (unsigned char *)s1;
	count = 0;
	while (count < n - 1 && ret == 0)
	{
		if (pun[count] != ptr[count])
			if (pun[count + 1] != ptr[count + 1])
			{
				ret = (pun[count] + pun[count + 1]);
			}	ret = (ptr[count] + ptr[count + 1]);
		count++;
	}
}
