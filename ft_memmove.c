/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:16:17 by hnagasak          #+#    #+#             */
/*   Updated: 2023/02/05 17:49:54 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *p = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;
    int n = len;
    while (n--)
    {
        p++;
        s++;
    }
    while (len--)
    {
        *(--p) = (unsigned char)*(--s);
    }   
    return dst;
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    char dst1[10] = "aaaaaaaaa";
    char src1[10] = "ABCDEFGHI";

    memmove(dst1,src1,5);
    printf("dst1=%s\n",dst1);

    char dst2[10] = "BBBBBBBBB";
    char src2[10] = "abcdefghi";

    ft_memmove(dst2,src2,5);
    printf("dst2=%s\n",dst2);
 }

