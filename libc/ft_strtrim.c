/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:39:47 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/23 20:54:25 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;
	size_t	trimmed_len;

	if (s1 == NULL)
		return (NULL);
	else if (set == NULL)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		start++;
	while (start < end && ft_strchr(set, *(s1 + end - 1)))
		end--;
	trimmed_len = end - start;
	trimmed = ft_calloc(trimmed_len + 1, sizeof(char));
	if (trimmed != NULL)
		ft_strlcpy(trimmed, s1 + start, trimmed_len + 1);
	return (trimmed);
}
