/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 13:42:23 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/03 16:03:59 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen(s) + 1;
	while (i--)
	{
		if (s[i] == c)
		{
			return ((char*)&s[i]);
		}
	}
	return (NULL);
}
