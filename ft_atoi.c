/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 06:23:58 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/15 07:23:31 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned int	nbr;

	nbr = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else
		sign = 1;
	while (*str != '\0')
	{
		if (!('0' <= *str && *str <= '9'))
		{
			break ;
		}
		nbr *= 10;
		nbr += (*str - '0');
		printf("ret = %ld, ",(long)(sign * (int)nbr));
		printf("range = %d \n",(-2147483647 < (sign * (int)nbr)));
		if (!(-2147483648 < (sign * (int)nbr) && (sign * (int)nbr) < 2147483647))
			return (-1);
		str++;
	}
	return (sign * nbr);
}
