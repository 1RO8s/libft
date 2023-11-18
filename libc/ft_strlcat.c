/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:44:38 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/22 01:58:41 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_strlen_null(const char *s)
{
	size_t	i;

	i = 0;
	while (s != NULL && s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*start;
	size_t	i;
	size_t	dstlen;

	if (dst == NULL && dstsize != 0)
		return (ft_strlen(NULL));
	dstlen = ft_strlen_null(dst);
	start = dst;
	while (start != NULL && *start != '\0')
		start++;
	i = 0;
	while (dstlen + i + 1 < dstsize && src[i] != '\0')
	{
		start[i] = src[i];
		i++;
	}
	if (dst != NULL)
		start[i] = '\0';
	if (dstlen < dstsize)
		return (dstlen + ft_strlen(src));
	else
		return (dstsize + ft_strlen(src));
}
