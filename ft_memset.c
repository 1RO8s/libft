/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 00:44:45 by hnagasak          #+#    #+#             */
/*   Updated: 2023/01/31 19:39:54 by hnagasak         ###   ########.fr       */
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