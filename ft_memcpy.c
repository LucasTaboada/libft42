/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 21:17:04 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 20:34:46 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned char			*ptr1;
	unsigned char			*ptr2;

	if (n == 0 || s1 == s2)
		return (s1);
	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (s1);
}
