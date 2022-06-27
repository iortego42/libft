/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:10 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/16 20:22:10 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	count;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	count = dstsize;
	while (*(src + count) != 0 && ++count < dstsize - dstlen)
		dst[count + dstlen - 1] = src[count - 1];
	dst[count + dstlen] = src[count]; 
	return (count + dstlen);
}
