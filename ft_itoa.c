/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 19:55:06 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 08:40:36 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_num_len(n);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
	}
	else
	{
		i = 0;
	}
	while (len-- > i)
	{
		str[len] = '0' + n % 10 * (n < 0 ? -1 : 1);
		n = n / 10;
	}
	return (str);
}
