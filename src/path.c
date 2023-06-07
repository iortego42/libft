/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:04:57 by iortego-          #+#    #+#             */
/*   Updated: 2023/06/07 20:18:08 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	extension(const char *str, const char *ext)
{
	int	strlenn;
	int	extlen;

	extlen = ft_strlen(ext);
	strlenn = ft_strlen(str);
	if (ft_strnstr(str + strlenn + extlen, ext, extlen) == NULL)
		return (FALSE);	
	return (TRUE);
}
