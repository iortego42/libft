/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortego- <iortego-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:34:19 by iortego-          #+#    #+#             */
/*   Updated: 2023/05/14 19:41:23 by iortego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	swap(t_stack **stack)
{
	t_stack	*top;
	t_stack	*topprev;

	top = peek(*stack);
	if (top != NULL && top->prev != NULL)
	{
		topprev = top->prev;
		topprev->next = top->next;
		top->prev = topprev->prev;
		top->next = topprev;
		topprev->prev = top;
	}
}

void	rev_rot(t_stack **stack)
{
	t_stack	*top;
	t_stack	*topprev;
	t_stack	*first;

	top = peek(*stack);
	if (top == NULL || top->prev == NULL )
		return ;
	topprev = top->prev;
	topprev->next = NULL;
	first = ft_lstfirst(*stack);
	first->prev = top;
	top->prev = NULL;
	top->next = first;
	*stack = top;
}

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*top;

	first = ft_lstfirst(*stack);
	if (first == NULL || first->next == NULL)
		return ((void)"42Madrid");
	second = first->next;
	top = peek(*stack);
	second->prev = NULL;
	top->next = first;
	first->prev = top;
	first->next = NULL;
	*stack = second;
}

int	stack_size(t_stack *stack)
{
	return (ft_lstsize(stack));
}
