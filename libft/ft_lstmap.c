/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:00:28 by mjeyavat          #+#    #+#             */
/*   Updated: 2021/07/13 18:55:52 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nl;
	t_list	*ne_l;

	if (!lst)
		return (NULL);
	nl = NULL;
	while (lst)
	{
		ne_l = ft_lstnew((*f)(lst->content));
		if (!ne_l)
		{
			ft_lstclear(&nl, del);
			return (NULL);
		}
		ft_lstadd_back(&nl, ne_l);
		ne_l = ne_l->next;
		lst = lst->next;
	}
	return (nl);
}
