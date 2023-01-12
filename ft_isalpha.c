/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 23:57:30 by hnagasak          #+#    #+#             */
/*   Updated: 2023/01/13 02:32:48 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}

// int main(void)
// {
// 	printf("%d\n",ft_isalpha('A'));
// 	printf("%d\n",isalpha('A'));
// 	printf("%d\n",ft_isalpha('z'));
// 	printf("%d\n",isalpha('z'));
// 	printf("%d\n",ft_isalpha('_'));
// 	printf("%d\n",isalpha('_'));
// }
