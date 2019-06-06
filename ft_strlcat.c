/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 08:27:24 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 22:21:28 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len;
	size_t		k;

	i = 0;
	k = size;
	if (k <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	len = ft_strlen(dst) + ft_strlen(src);
	while (*dst)
		dst++;
	while (src[i] && (i < size - (len - ft_strlen(src)) - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
