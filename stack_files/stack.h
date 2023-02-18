#ifndef STACKFT_H
# define STACKFT_H

# include "../libft.h"

typedef t_list t_stack;

t_stack	*new_stack_element(void	*content);
void	push(t_stack **stack, t_stack *element);
void	swap(t_stack **stack);
void	rotate(t_stack **stack);
void	rev_rot(t_stack **stack);
t_bool	pop(t_stack **stack, void (*del)(void *));
void	delete_stack(t_stack **stack, void (*del)(void *));

#endif

