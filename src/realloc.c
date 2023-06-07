/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:32:45 by iortego-          #+#    #+#             */
/*   Updated: 2023/06/06 19:36:47 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*realloc(void *ptr, size_t size)
{
	void	*amem;

	amem = (void *)malloc(size);
	if (ptr && amem)
	{
		ft_memcpy(amem, ptr, size);
		free(ptr);
		ptr = NULL;
	}
	return (amem);
}
