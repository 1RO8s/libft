/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:13:57 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/11 22:05:46 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*result;

	result = s;
	while (*result)
	{
		result++;
	}
	while (s <= result)
	{
		if (*result == c)
		{
			return ((char *)result);
		}
		result--;
	}
	return (NULL);
}
