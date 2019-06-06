/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 08:15:59 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 20:07:13 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	if (s2[0] == '\0')
	{
		return ((char *)s1);
	}
	i = 0;
	while (s1[i] != '\0' && n > i)
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (i + j >= n || s1[i + j] != s2[j])
				break ;
			j++;
		}
		if (s2[j] == '\0')
		{
			return ((char *)(s1 + i));
		}
		i++;
	}
	return (0);
}
