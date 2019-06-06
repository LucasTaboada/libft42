/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 14:46:46 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 23:23:43 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*srcp;
	size_t				i;

	srcp = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (srcp[i] == (unsigned char)c)
		{
			return ((void *)srcp + i);
		}
		i++;
	}
	return (NULL);
}
