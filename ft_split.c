/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:49:43 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/30 13:12:01 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_how_many_word(char const	*s, char	centinel)
{
	int	count;

	count = 0;
	while (*(s) != 0)
		if (*(s++) != c && (*s == c || *s == 0))
			count++;
	return (count);
}
int	ft_how_many_char(char const *s, char	 centinel)
{
	int	count;

	count = 0;
	while (*s != centinel && *(s++) != 0)
		count++;
	return (count);
}
char	**ft_split(char const	*s, char	c)
{
	char	**list;
	int		words;
	int		count;

	count = 0;
	words = ft_how_many_word(s, c);
	list = ft_calloc(words + 1, sizeof(char	*));
	if (list == NULL)
		return (NULL);	
	while (s != 0)
	{	
		while (*s == c)
			s++;
		count = ft_how_many_char(s, c);
		*list = ft_calloc(count + 1, sizeof(char));
		if (*list == NULL)
			return (NULL);
		s += count;
		ft_strlcpy(*(list++), s, count + 1);
	}
	return (list - words);
}
