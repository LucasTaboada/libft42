/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 07:31:46 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/10 07:38:29 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int arg)
{
	if ((arg >= 'a' && arg <= 'z') ||
			(arg >= 'A' && arg <= 'Z'))
	{
		return (1);
	}
	return (0);
}
