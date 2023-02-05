/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:47:31 by hnagasak          #+#    #+#             */
/*   Updated: 2023/02/05 19:03:56 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}

int ft_tolower(int c)
{
    if(ft_isupper(c)){
        return c + ('a' - 'A');
    }    
    return c;
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n",tolower('a'));
//     printf("%d\n",ft_tolower('a'));

//     printf("%d\n",tolower('A'));
//     printf("%d\n",ft_tolower('A'));

//     printf("%d\n",tolower('-'));
//     printf("%d\n",ft_tolower('-'));
// }