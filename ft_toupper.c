/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:53:49 by hnagasak          #+#    #+#             */
/*   Updated: 2023/02/05 19:00:37 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	return ('a' <= c && c <= 'z');
}

int ft_toupper(int c)
{
    if(ft_islower(c)){
        return c - ('a' - 'A');
    }    
    return c;
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n",toupper('a'));
//     printf("%d\n",ft_toupper('a'));

//     printf("%d\n",toupper('A'));
//     printf("%d\n",ft_toupper('A'));

//     printf("%d\n",toupper('-'));
//     printf("%d\n",ft_toupper('-'));
// }
