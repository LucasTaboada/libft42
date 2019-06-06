/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 19:40:09 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/27 08:33:21 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	unsigned char *ptr;

	ptr = NULL;
	if (size)
	{
		if (!(ptr = (unsigned char *)malloc(size)))
		{
			return (NULL);
		}
		while (size)
		{
			ptr[--size] = 0;
		}
		return ((void *)ptr);
	}
	return (NULL);
}
