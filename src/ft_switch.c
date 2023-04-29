#include "libft.h"

void	ft_switch_mem(long long *a, long long *b)
{
	long long *aux;

	aux = a;
	a = b;
	b = aux;
}

void	ft_switch_values(long long *a, long long *b)
{
	long long aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
