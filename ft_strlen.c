/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 00:44:45 by hnagasak          #+#    #+#             */
/*   Updated: 2023/01/15 01:11:01 by hnagasak         ###   ########.fr       */
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
