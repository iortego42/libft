/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <iortego-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:48:31 by iortego-          #+#    #+#             */
/*   Updated: 2023/03/18 20:20:20 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *newnode)
{
	t_list	*first;

	if (lst == NULL || newnode == NULL)
		return ;
	first = ft_lstfirst(*lst);
	newnode->next = first;
	*lst = newnode;
	newnode->prev = NULL;
}
