/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 06:23:58 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/22 01:55:23 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	if (('\t' <= c && c <= '\r') || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	nbr;

	sign = 1;
	nbr = 0;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		if ((LONG_MAX / 10 < sign * nbr) || (LONG_MAX / 10 <= sign * nbr
				&& LONG_MAX % 10 < (*str - '0')))
			return ((int)LONG_MAX);
		if ((LONG_MIN / 10 > sign * nbr) || (LONG_MIN / 10 >= sign * nbr && -1
				* (LONG_MIN % 10) < (*str - '0')))
			return ((int)LONG_MIN);
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (sign * (int)nbr);
}
