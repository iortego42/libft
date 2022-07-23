/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:07:14 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/30 11:49:27 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*trim;
	char	*src;
	char	*setm;
	size_t	trim_len;

	trim_len = ft_strlen(s1);
	setm = (char *)set;
	src = (char *)s1;
	while (*src != 0)
	{
		setm = (char *)set;
		while ((*setm && *(setm++) != *src) || (!trim_len-- && src++))
			;
	}
	src = (char *)s1;
	trim = ft_calloc(trim_len + 1, sizeof(char));
	while (*src != 0)
	{
		while ((*setm && *(setm++) != *src))
			;
		*(trim++) = *(src++);
	}
	return (trim - --trim_len);
}
