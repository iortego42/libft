#include "stack.h"

t_stack	*new_stack_element(void *content)
{
	return (ft_lstnew(content));
}

void	push(t_stack	**stack, t_stack	*element)
{
	ft_lstadd_back(stack, element);
}

t_stack *peek(t_stack	*stack)
{
	return (ft_lstlast(stack));
}

t_bool	pop(t_stack **stack, void (*del)(void *))
{
	t_stack	*top;
	t_stack	*topprev;

	if (stack == NULL || *stack == NULL)
		return (FALSE);
	top = peek(*stack);
	topprev = top->prev;
	if (topprev != NULL)
		topprev->next = NULL;
	if (del != NULL)
		ft_lstdelone(top, del);
	return (TRUE);
}

void	delete_stack(t_stack **stack, void (*del)(void *))
{
	t_bool deleted;
	
	if (stack == NULL || *stack == NULL || del == NULL)
		return ((void)"42 Madrid");
	deleted = TRUE;
	while (deleted == TRUE)
		deleted = pop(stack, del);
}

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

void	rotate(t_stack **stack)
{
	t_stack	*top, *topprev;
	
	top = peek(*stack);
	if (top->prev == NULL)
		return ((void)"42Madrid");
	topprev = top->prev;
	topprev->next = NULL; 
	ft_lstadd_front(stack, top);
}

void	rev_rot(t_stack **stack)
{
	t_stack	*first, *topprev;
	
	first = *stack;
	while (first->prev != NULL)
		first = first->prev;
	topprev = first->next;
	if (first->next == NULL)
		return ((void)"42Madrid");	
	topprev->prev = NULL;
	ft_lstadd_back(stack, first);
}

int	stack_size(t_stack *stack)
{
	return (ft_lstsize(stack));
}
