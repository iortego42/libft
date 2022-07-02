/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:29:19 by iortego-          #+#    #+#             */
/*   Updated: 2022/07/02 17:51:43 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_matrix_delete(void	*matrix, int	dimension, long int *count)
{
	int	free_count;

	free_count = 0;
	while (dimension-- > 0)
	{	
		while (count[dimension] > free_count && dimension > 0)
			ft_all_free(*(matrix + free_count++), dimension, count);	
		free_count = 0;
		while (count[dimension] > free_count)
			free(matrix + free_count++);
	}
}
