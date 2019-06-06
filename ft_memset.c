/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 19:19:44 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/29 22:07:49 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	if (b == NULL)
	{
		return (NULL);
	}
	ptr = b;
	while (len)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (b);
}
