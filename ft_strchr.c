/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:56:35 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/31 21:50:17 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(char *str, int c)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)str;
	while (s[i] != c)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (s + i);
}
