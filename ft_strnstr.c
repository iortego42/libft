/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:10 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/29 13:34:09 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	count;

	while (*haystack != 0 && len-- > 0)
	{
		if (*(haystack++) == *needle || *needle == 0)
		{
			count = 0;
			while (*(haystack++ - 1) == *(needle + count))
				count++;
			if (*(needle + count) == 0)
				return ((char *)haystack);
		}
	}
	return (NULL);
}