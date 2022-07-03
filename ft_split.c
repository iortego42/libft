/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:49:43 by iortego-          #+#    #+#             */
/*   Updated: 2022/07/03 18:06:07 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const	*s, char	c)
{
	char	**list;
	int		words;
	int		count;

	count = 0;
	words = 0;
	list = ft_calloc(ft_how_many_word(s, c) + 1, sizeof(char	*));
	if (list == NULL)
		return (NULL);	
	while (s != 0)
	{	
		while (*s == c)
			s++;
		count = ft_how_many_char(s, c);
		*(list + words) = ft_calloc(count + 1, sizeof(char));
		if (*(list + words) == NULL)
			return (ft_matrix_delete(list, 2), NULL);
		s += count;
		ft_strlcpy(*(list + words++), s, count + 1);
	}
	return (list);
}
