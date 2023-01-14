/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:30:00 by hnagasak          #+#    #+#             */
/*   Updated: 2023/01/14 23:47:36 by hnagasak         ###   ########.fr       */
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

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int main(void)
// {
// 	int c;
// 	c = '0';
// 	printf("%d -> %d, %d\n",c ,ft_isalnum(c), isalnum(c));
// 	c = 'a';
// 	printf("%d -> %d, %d\n",c ,ft_isalnum(c), isalnum(c));
// 	c = '-';
// 	printf("%d -> %d, %d\n",c ,ft_isalnum(c), isalnum(c));
// }
