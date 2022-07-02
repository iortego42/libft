/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:49:43 by iortego-          #+#    #+#             */
/*   Updated: 2022/07/02 14:12:17 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_how_many_word(char const	*s, char	sentinel)
{
	int	count;

	count = 0;
	while (*(s) != 0)
		if (*(s++) != sentinel && (*s == sentinel || *s == 0))
			count++;
	return (count);
}
int	ft_how_many_char(char const *s, char	 sentinel)
{
	int	count;

	count = 0;
	while (*s != sentinel && *(s++) != 0)
		count++;
	return (count);
}
 
void	ft_all_free(void	*matrix, int	dimension, long long int	*count)
{
	int	free_count;

	while (dimension-- > 0)
	{
		if (dimension != 1)
			ft_all_free(*matrix, dimension, count);
		free_count = 0;
		while (count[dimension] > free_count)
			free(matrix + free_count++);
	}	
}
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
			return (NULL);
		s += count;
		ft_strlcpy(*(list + words++), s, count + 1);
	}
	return (list);
}
