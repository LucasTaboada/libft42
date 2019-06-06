/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 15:50:26 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 22:55:13 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		i;
	size_t		j;

	if (s2[0] == '\0')
	{
		return ((char *)s1);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i + j] != s2[j])
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
