/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 14:46:46 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/31 21:35:38 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	const char		*srcp;
	size_t			i;

	srcp = (char *)s;
	i = 0;
	if (!s || !c)
		return (NULL);
	while (n--)
	{
		if (srcp[i] == c)
		{
			return ((void *)srcp + i);
		}
		i++;
	}
	return (NULL);
}
