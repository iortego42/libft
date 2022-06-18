/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:09 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/18 20:08:47 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	len)
{
	size_t	count;
	
	count = 0;
	if (src < dest)
		while (0 < len--)
			((unsigned char *)dest)[len] = ((const unsigned char *)src)[len];
	else	
		while (len > count++)
			((unsigned char *)dest)[count - 1] = ((const unsigned char *)src)[count - 1];
	return (dest);
}
