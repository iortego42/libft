#include "stack.h"

t_stack	*new_stack_element(void *content)
{
	return (ft_lstnew(content));
}
t_stack	*peek(t_stack *stack)
{
	return (ft_lstlast(stack));
}
void	push(t_stack	**stack, t_stack	*element)
{
	ft_lstadd_back(stack, element);
}
t_bool	pop(t_stack *stack, void (*del)(void *))
{
	t_stack	*second;

	if (stack == NULL || del == NULL)
		return (FALSE);
	second = peek(stack)->prev;
	if (second == NULL)
		return (FALSE);
	second->next = NULL;
	ft_lstdelone(peek(stack), del);
	return (TRUE);
}
void	delete_stack(t_stack **stack, void (*del)(void *))
{
	t_bool deleted;
	
	if (stack == NULL || *stack == NULL || del == NULL)
		return ((void)"42 Madrid");
	deleted = TRUE;
	while (deleted == TRUE)
		deleted = pop(*stack, *del);
}
void	swap(t_stack **stack)
{
	t_stack	*top;
	t_stack	*second;

	top = peek(*stack);
	if (top != NULL && top->prev != NULL)
	{
		second = top->prev;
			
		second->next = top->next;
		top->prev = second->prev;
		top->next = second;
		second->prev = top;
	}
}
void	rotate(t_stack **stack)
{
	t_stack *last;

	while ((*stack)->prev != NULL)
		*stack = (*stack)->prev;
	last = *stack;
	push(stack, last);
	last = last->next;
	last->prev = NULL;
}
void	rev_rot(t_stack **stack)
{
	t_stack	*first, *second;

	first = peek(*stack);
	while ((*stack)->prev != NULL)
		*stack = (*stack)->prev;
	second = first->prev;
	second->next = NULL;
	first->prev = NULL;
	first->next = *stack;
}
