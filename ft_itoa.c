/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <iortego-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:10:25 by iortego-          #+#    #+#             */
/*   Updated: 2022/07/03 18:50:15 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_itoa(int	n)
{
	char	*number;
	unsigned int	sign;
	int	digits;

	digits = 1;	
	if (n < 0 && digits++)
		sign = -1 * n;
	sign = n;
	while (sign > 0)
	{
		digits++;
		sign /= 10;
	}
	number = (char	*)ft_calloc(digits + 1, sizeof(char));
	if (number == NULL)
		return (NULL);
	if (n < 0)
		*number = '-';
	number += digits;
	while (sign > 0)
	{	
		*(number--) = '0' + sign % 10;
		sign /= 10;
	}
	return (number);
}
