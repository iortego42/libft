/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:49:43 by iortego-          #+#    #+#             */
/*   Updated: 2022/07/04 18:51:25 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_how_many_char(char const *s, char	 sentinel)
{
	int	count;

	count = 0;
	while (*s != sentinel && *(s++) != 0)
		count++;
	return (count);
}
static int	ft_how_many_word(char const	*s, char	sentinel)
{
	int	count;

	count = 0;
	while (*(s) != 0)
		if (*(s++) != sentinel && (*s == sentinel || *s == 0))
			count++;
	return (count);
}
static void	ft_matrix_delete(void	**matrix, int	dimension)
{
	ft_matrix_free(matrix, dimension);
	matrix = NULL;
}
static void	ft_matrix_free(void	**matrix, int	dimension)
{
	int	free_count;

	free_count = 0;
	while (dimension-- > 0)
	{	
		while (*(matrix + free_count) != NULL && dimension > 0)
			ft_matrix_free(*(matrix + free_count++), dimension);	
		free_count = 0;
		while (matrix + free_count != NULL)
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
			return (ft_matrix_delete((void	**)list, 2), NULL);
		s += count;
		ft_strlcpy(*(list + words++), s, count);
	}
	return (list);
}
