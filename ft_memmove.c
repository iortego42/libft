/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:09 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/16 21:06:35 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_memmove(void	*dest, const void	*src, size_t	len)
{
	size_t	count;
	void	*ptr;
	int	a;
// hay que mirar como castear punteros y repasar los voids
	ptr = dest;
	count = 0;
	while (src + count != ptr)
		count++;
	if (src + count == ptr)
		return (ptr);
	while (0 < len--)
		(long int)ptr[len] = src[len];
	return (ptr);
}
