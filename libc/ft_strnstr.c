/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:54:54 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/22 16:43:01 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	cmp_len;

	if (haystack == NULL && len != 0)
		ft_strlen(NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	if (len < ft_strlen(needle))
		return (NULL);
	cmp_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (len - i < cmp_len)
			return (NULL);
		if (ft_strncmp(&haystack[i], needle, cmp_len) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
