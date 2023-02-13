/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:13:57 by hnagasak          #+#    #+#             */
/*   Updated: 2023/02/13 08:49:03 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	const char	*result;

	result = s;
	while (*result)
	{
		if (*result == c)
		{
			return ((char *)result);
		}
		result++;
	}
	return (NULL);
}
