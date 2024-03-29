/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 15:11:21 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 21:59:42 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*psrc;
	char	*pdest;
	size_t	i;

	if (n == 0 || dest == src)
		return (dest);
	pdest = (char *)dest;
	psrc = (char *)src;
	i = -1;
	if (pdest > psrc)
	{
		while (n-- > 0)
			pdest[n] = psrc[n];
	}
	else
	{
		while (++i < n)
			pdest[i] = psrc[i];
	}
	return (dest);
}
