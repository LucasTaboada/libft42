/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 19:44:16 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/22 08:38:01 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_strclr(char *s)
{
	while (*s)
	{
		*s++ = '\0';
	}
}
