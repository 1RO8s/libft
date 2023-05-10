/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:42:57 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/11 02:47:11 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char	*dst_end;
	size_t	idx;
	size_t	cpylen;

	cpylen = ft_strlen(src);
	dst_end = dst;
	idx = 1;
	while (idx < dstsize && *src != '\0')
	{
		*dst_end = *src;
		dst_end++;
		src++;
		idx++;
	}
	*dst_end = '\0';
	return (cpylen);
}