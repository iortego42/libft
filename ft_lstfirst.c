#include "libft.h"

t_list	*ft_lstfirst(t_list *lst)
{
	while (lst != NULL && lst->prev != NULL)
		lst = lst->prev;
	return (lst);
}
