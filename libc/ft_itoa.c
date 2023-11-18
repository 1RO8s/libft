/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 03:57:18 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/23 21:06:25 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int	len;
	int	tmp;

	len = 1;
	tmp = n / 10;
	while (tmp != 0)
	{
		len++;
		tmp = tmp / 10;
	}
	return (len);
}

static void	recursive_itoa(char *str, int n, int len)
{
	if (n == -2147483648)
	{
		*str = '-';
		recursive_itoa(str + 1, 214748364, len - 2);
		*(str + len - 1) = '8';
	}
	else if (n < 0)
	{
		*str = '-';
		recursive_itoa(str + 1, -n, len - 1);
	}
	else if (0 <= n && n < 10)
		*str = '0' + n;
	else if (10 <= n || n == -2147483648)
	{
		recursive_itoa(str, n / 10, len - 1);
		*(str + len - 1) = '0' + (n % 10);
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = 0;
	len = count_digit(n);
	if (n < 0)
		len++;
	result = (char *)ft_calloc((len + 1), sizeof(char));
	if (!result)
		return (NULL);
	recursive_itoa(result, n, len);
	return (result);
}
