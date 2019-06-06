/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 20:02:22 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/27 09:25:04 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *str1, const void *str2, size_t num)
{
	unsigned int		i;
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	if (!str1 || !str2 || !num)
	{
		return (0);
	}
	ptr1 = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;
	i = 0;
	while (num--)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
