/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 19:52:07 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/04 18:53:45 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		c;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) *
					((ft_strlen(s1) + ft_strlen(s2)) + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	c = 0;
	while (s2[c] != '\0')
	{
		str[i + c] = s2[c];
		c++;
	}
	str[c + i] = '\0';
	return (str);
}
