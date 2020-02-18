#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	newlst = NULL;	
	ft_lstadd_back(&newlst, ft_lstnew(f(lst->content)));
	while ((lst = lst->next) != NULL)
		ft_lstadd_back(&newlst, ft_lstnew(f(lst->content)));
	ft_lstclear(&lst, del);
	return (newlst);
}
