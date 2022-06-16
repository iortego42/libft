/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:09 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/16 20:22:09 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	int	count;
	unsigned char *ptr;
	unsigned char *pun;

	ptr = (unsigned char *)s2;
	pun = (unsigned char *)s1;
	count = 0;
	while (count < n && pun[count] != ptr[count])
		count++;
	return (pun[count] - ptr[count]);
}
