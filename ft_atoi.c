/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltaboada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:06:22 by ltaboada          #+#    #+#             */
/*   Updated: 2019/05/13 10:07:04 by ltaboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int	num;
	int	negative;

	negative = 1;
	num = 0;
	while (*str && (*str == '\n' || *str == ' ' || *str == '\f'
				|| *str == '\r' || *str == '\v' || *str == '\t'))
	{
		++str;
	}
	if (*str == '-')
	{
		negative = -1;
	}
	if (*str == '-' || *str == '+')
	{
		++str;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		++str;
	}
	return (num * negative);
}
