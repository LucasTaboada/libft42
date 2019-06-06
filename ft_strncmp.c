/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 17:58:52 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/31 22:00:12 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *str1, const char *str2, size_t num)
{
	int		i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' &&
			str1[i] == str2[i] && i < (int)num - 1)
	{
		i++;
	}
	if (num)
	{
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
