/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 19:43:05 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/31 20:57:05 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}
