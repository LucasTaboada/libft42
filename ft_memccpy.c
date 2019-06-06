/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:24:12 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/31 15:36:07 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*source;
	unsigned char		*dst;

	i = 0;
	source = (unsigned char *)src;
	dst = (unsigned char *)dest;
	while (n > i)
	{
		dst[i] = source[i];
		if (source[i] == (unsigned char)c)
		{
			return (dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
