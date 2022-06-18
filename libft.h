/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:47:37 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/18 20:25:44 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int		ft_isalpha(char	c);
int		ft_isdigit(char	c);
int		ft_isalnum(char	c);
int		ft_isascii(char	c);
int		ft_isprint(char	c);
int		ft_atoi(char	*str);
void	ft_bzero();
void	*ft_calloc(size_t	count, size_t	size);
void	*ft_memchr(const void	*s, int	c, size_t	n);
int     ft_memcmp(const void    *s1, const void *s2, size_t     n);
void	ft_memcpy();
void	*ft_memmove(void	*dest, const void	*src, size_t	len);
void	*ft_memset(void	*b, int	c, size_t len);
void	ft_strchtr();
void	ft_strdutp();
void	ft_strlcat();
void	ft_strlcpy();
void	ft_strlen();
void	ft_strncmp();
void	ft_strnstr();
void	ft_strrchr();
void	ft_tolower();
void	ft_toupper();

/*--MIS FUNCIONES--*/

int		ft_isspace(char	c);

#endif
