/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 19:50:04 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 21:43:56 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	if (ft_strlen(s1) != ft_strlen(s2))
	{
		return (0);
	}
	i = 0;
	if (s1 && s2 && n)
	{
		while (s1[i] != '\0' && s2[i] != '\0' && n > 0)
		{
			if (s1[i] != s2[i])
			{
				return (0);
			}
			i++;
			n--;
		}
		return (1);
	}
	return (1);
}
