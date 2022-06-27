/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:10 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/27 13:40:03 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	dstlen;
	size_t	count;

	count = 0;
	dstlen = 0;
	while (*(dst + dstlen) != 0 && dstlen++ < dstsize)
		;
	if (dstlen < dstsize)
	{
		while (*(src + count) != 0 && dstlen + count++ < dstsize)
			dst[dstlen + count - 1] = *(src + count - 1);
		dst[dstlen + count] = 0;
	}
	return (dstlen + ft_strlen(src));
}
