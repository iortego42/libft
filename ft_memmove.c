/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:09 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/17 20:41:38 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	len)
{
	if (src < dest)
		while (0 < len--)
			*(unsigned char *)(dest + len) = *(const unsigned char *)(src + len);
	else
	{
		size_t	count;
		
		count = 0;
		while (count < len)
			((unsigned char *)dest)[count] = ((const unsigned char *)src)[count++];
	}
	return (dest);
}
