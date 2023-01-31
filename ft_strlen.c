/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 00:44:45 by hnagasak          #+#    #+#             */
/*   Updated: 2023/01/31 19:29:02 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


size_t ft_strlen(const char *s)
{
    int len;
    len =0;
    while(s[len])
        len++;
    return (len);    
}

// int main(void)
// {
//     char *str;
//     str = "ABCDEFG";
//     printf("%s -> %lu, %lu\n",str,ft_strlen(str),strlen(str));

//     str = "0123456789";
//     printf("%s -> %lu, %lu\n",str,ft_strlen(str),strlen(str));

//     str = "";
//     printf("%s -> %lu, %lu\n",str,ft_strlen(str),strlen(str));

//     str = "     ";
//     printf("%s -> %lu, %lu\n",str,ft_strlen(str),strlen(str));
// }
