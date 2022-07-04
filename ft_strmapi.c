/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <iortego-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:16:44 by iortego-          #+#    #+#             */
/*   Updated: 2022/07/04 19:16:51 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*s, char	(*f)(unsigned int, char))
{
	char	*newstr;
	char	*sindex;

	if (!s || !f)
		return (NULL);
	sindex = (char	*)s;
	newstr = ft_calloc(ft_strlen(s) + 1, sizeof(char);
	if (newstr == NULL))
		return (NULL);
	while (*sindex != 0)
		*newstr++ = f(sindex - s, *sindex++);
	return (newstr);
}
