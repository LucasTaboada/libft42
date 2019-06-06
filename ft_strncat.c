/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 17:28:20 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/31 19:37:10 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t num)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && num-- != 0)
	{
		*(dest + (len + i)) = src[i];
		i++;
	}
	*(dest + (len + i)) = '\0';
	return (dest);
}
