/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:09 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/18 20:23:23 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#define CAST const unsigned char *

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	size_t	count;

	count = 0;
	while (((CAST)s1)[count] != ((CAST)s2)[count] && n > count++)
		;
	return (((CAST)s1)[count] - ((CAST)s2)[count]);
}
