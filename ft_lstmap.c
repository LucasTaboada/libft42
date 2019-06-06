/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:34:56 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 10:58:23 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*res;
	t_list		*head;
	t_list		*elem;

	if (!lst || !f)
		return (NULL);
	elem = f(lst);
	if (!(res = ft_lstnew(elem->content, elem->content_size)))
		return (NULL);
	lst = lst->next;
	head = res;
	while (lst)
	{
		elem = f(lst);
		if (!(res->next = ft_lstnew(elem->content, elem->content_size)))
			return (NULL);
		res = res->next;
		lst = lst->next;
	}
	return (head);
}
