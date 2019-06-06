/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 19:54:00 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 08:28:32 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	if (!s || !(str = (char **)malloc(sizeof(*str) *
					(ft_countwords(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_countwords(s, c))
	{
		k = 0;
		if (!(str[i] = ft_strnew(ft_word_len(&s[j], c) + 1)))
			str[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j] != '\0')
			str[i][k++] = s[j++];
		str[i][k] = '\0';
	}
	str[i] = 0;
	return (str);
}
