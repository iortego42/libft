#include "stack.h"


t_stack	*peek(t_stack *stack)
{
	return (ft_lstlast(stack));
}
void	push(t_stack	**stack, t_stack	*element)
{
	ft_lstadd_back(stack, element);
}
void	pop(t_stack **stack, void (*del)(void *))
{
	ft_lstdelone(peek(*stack), del);
}
t_stack	*swap(t_stack **stack)
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
	return (top);
}
void	rotate(t_stack **stack)
{
	t_stack *first, *second;
	
	first = peek(*stack);
	if (first == NULL)
		return ((void)"42Madrid");
	second = first->prev;
	while (first->prev->prev != NULL)
	{
		first = swap()
	}
	
}
