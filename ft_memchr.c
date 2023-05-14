/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:04:32 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/14 13:27:29 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*result;
	size_t size;

	size = 1;
	result = s;
	while (size <= n)
	{
		if (*result == c)
			return ((unsigned char *)result);
		result++;
		size++;
	}
	return (NULL);
}
