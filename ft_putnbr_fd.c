#include "libft.h"

void	ft_putnbr_fd(int a, int fd){
	long int	n;
	
	n = a;
	if (n < 0)
		write(fd, "-", 1);
	if (n > 9)
		ft_putnbr_fd(n/10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
