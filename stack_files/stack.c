#include "stack.h"


t_stack	*peek(s_stack *stack)
{
	while (stack != NULL && stack->next != NULL)
		stack = stack->next;
	return (stack);
}
void	push(t_stack	**stack, t_stack	*element)
{
}
