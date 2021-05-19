/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:20:39 by lfrasson          #+#    #+#             */
/*   Updated: 2021/05/03 02:43:09 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	if (!f || !lst)
		return (NULL);
	newlst = NULL;
	ft_lstadd_back(&newlst, ft_lstnew(f(lst->content)));
	lst = lst->next;
	while (lst != NULL)
		ft_lstadd_back(&newlst, ft_lstnew(f(lst->content)));
	ft_lstclear(&lst, del);
	return (newlst);
}
