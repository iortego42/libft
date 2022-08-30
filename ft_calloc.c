/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:08 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/29 11:46:04 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	c;
	void	*ptr;

	c = 0;
	ptr = malloc(count * size);
	if (ptr != NULL)
		ft_bzero(ptr, size * count);
	return (ptr);
}
