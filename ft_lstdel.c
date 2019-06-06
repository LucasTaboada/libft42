/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:30:03 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 18:04:33 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*list;
	t_list		*tmp;

	list = *alst;
	while (list)
	{
		tmp = list->next;
		del(list, list->content_size);
		list = tmp;
	}
	*alst = NULL;
}
