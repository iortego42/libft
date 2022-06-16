/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:08 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/16 20:22:08 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		c;
	void	*ptr;
	
	ptr = malloc(count * size);
	if (ptr != NULL)
		while (c < count)
			ptr[c++] = 0;
	return (ptr);
}
