#include "stack.h"
#include "libft.h"

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
	
	if (stack == NULL)
		return (FALSE);
	top = peek(*stack);
	if (top == NULL)
		return (FALSE);
	topprev = top->prev;
	if (topprev != NULL)
		topprev->next = NULL;
	else 
		*stack = NULL;
	top->prev = NULL;
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
	t_stack	*top, *topprev, *first;
	
	top = peek(*stack);
	if (top == NULL || top->prev == NULL )
		return;
	topprev = top->prev;
	topprev->next = NULL;
	first = ft_lstfirst(*stack);
	first->prev = top;
	top->prev = NULL;
	top->next = first;
}

void	rev_rot(t_stack **stack)
{
	t_stack	*first, *second, *top;
	
	first = ft_lstfirst(*stack);
	if (first == NULL || first->next == NULL)
		return ((void)"42Madrid");
	second = first->next;
	top = peek(*stack);
	second->prev = NULL;
	top->next = first;
	first->prev = top;
	first->next = NULL;
}

int	stack_size(t_stack *stack)
{
	return (ft_lstsize(stack));
}
