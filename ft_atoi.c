/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:22:08 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/16 20:22:08 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char	*c)
{
	int	ret;
	int	sing;

	ret = 0;
	sing = 1;
	while (ft_isspace(*c))
		c++;
	if (*c == '-')
		sing *= -1;
	while (ft_isdigit(*c))
		ret = 10 * ret + *(c++) - '0';
	return (ret * sing);
}
