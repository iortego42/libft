/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <iortego-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:59:30 by iortego-          #+#    #+#             */
/*   Updated: 2022/07/07 14:59:33 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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