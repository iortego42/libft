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
	size_t	sindex;

	if (!s || !f)
		return (NULL);
	sindex = 0;
	newstr = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (*(s + sindex++) != 0)
		*newstr++ = f(sindex - 1, *(s + sindex  - 1));
	return (newstr - sindex - 1);
}
