/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:01:22 by hnagasak          #+#    #+#             */
/*   Updated: 2023/05/16 19:30:59 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	const char *sub_start;

	if (ft_strlen(s) + 1 < start)
		return (NULL);

	sub_start = s + start;
	substr = ft_calloc(len + 1, sizeof(char));
	if (substr != NULL)
		ft_strlcpy(substr, (char *)sub_start, len + 1);

	return ((char *)substr);
}