/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:20:47 by ltaboada          #+#    #+#             */
/*   Updated: 2019/06/05 18:05:16 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_word_len(char const *str, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] == c)
	{
		i++;
	}
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}
