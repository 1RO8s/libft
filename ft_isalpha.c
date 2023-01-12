/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 23:57:30 by hnagasak          #+#    #+#             */
/*   Updated: 2023/01/13 02:43:01 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}

int	ft_islower(int c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
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
