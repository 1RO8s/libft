/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:16:17 by hnagasak          #+#    #+#             */
/*   Updated: 2023/02/13 08:25:26 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*s;
	int				n;

	p = (unsigned char *)dst;
	s = (unsigned char *)src;
	n = len;
	while (n--)
	{
		p++;
		s++;
	}
	while (len--)
	{
		*(--p) = (unsigned char)*(--s);
	}
	return (dst);
}
