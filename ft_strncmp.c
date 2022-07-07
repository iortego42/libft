/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:10 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/16 20:22:10 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define CAST unsigned char

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && (CAST *)(s1++) == (CAST *)(s2++) && n-- > 0)
		;
	return (*s1 - *s2);
}