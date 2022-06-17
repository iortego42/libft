/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:47:37 by iortego-          #+#    #+#             */
/*   Updated: 2022/06/16 20:48:10 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int ft_isalpha(char	c);
int ft_isdigit(char	c);
int ft_isalnum(char	c);
int ft_isascii(char	c);
int ft_isprint(char	c);
int	ft_atoi(char	*str);
int	ft_isspace(char	c);
void	ft_bzero();
void	ft_calloc();
void	ft_memchr();
void	ft_memcmp();
void	ft_memcpy();
void	ft_memmove();
void	ft_memset();
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
#endif
