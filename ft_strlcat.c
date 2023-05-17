/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:44:38 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/17 16:14:42 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*dst_end;
	size_t	idx;
	size_t	catlen;

	catlen = ft_strlen(dst) + ft_strlen(src);
	dst_end = dst;
	while (*dst_end)
	{
		dst_end++;
	}
	idx = 0;
	while (idx < dstsize && *src != '\0')
	{
		*dst_end = *src;
		dst_end++;
		src++;
	}
	return (catlen);
}
