/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 19:53:17 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/27 09:16:14 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		min;
	int		max;
	int		len;

	if (!s)
		return (NULL);
	min = 0;
	while (s[min] != '\0' &&
			(s[min] == ' ' || s[min] == '\t' || s[min] == '\n'))
		min++;
	max = ft_strlen(s);
	while (max > min &&
			(s[max - 1] == ' ' || s[max - 1] == '\t' || s[max - 1] == '\n'))
		max--;
	if (max == min)
		return (ft_strnew(1));
	len = max - min;
	return (ft_strsub(s, min, len));
}
