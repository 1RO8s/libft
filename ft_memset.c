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

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *p = b;
    while (len--)
        *(p++) = (unsigned char)c;
    return b;    
}

int main(void)
{
    char str1[11] = "aaaaaa";
    memset(str1,'A',1);
    printf("%s\n",str1);
    char str2[11] = "bbbbbb";
    ft_memset(str2,'A',1);
    printf("%s\n",str2);
}