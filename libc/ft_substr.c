/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:22 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/22 01:59:58 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	const char	*sub_start;
	size_t		malloc_size;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start + 1)
		return (ft_strdup(""));
	sub_start = s + start;
	if (ft_strlen(sub_start) <= len)
		malloc_size = ft_strlen(sub_start);
	else
		malloc_size = len;
	substr = ft_calloc(malloc_size + 1, sizeof(char));
	if (substr != NULL)
		ft_strlcpy(substr, (char *)sub_start, len + 1);
	return ((char *)substr);
}
