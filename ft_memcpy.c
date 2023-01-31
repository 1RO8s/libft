/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:16:57 by hnagasak          #+#    #+#             */
/*   Updated: 2023/01/31 21:40:40 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char *p = dst;
    while (n--)
        *(p++) = (unsigned char)*(src++);
    return dst;
}

// void *ft_memset(void *b, int c, size_t len)
// {
//     unsigned char *p = b;
//     while (len--)
//         *(p++) = (unsigned char)c;
//     return b;    
// }

#include <string.h>
#include <stdio.h>

int main(void)
{
    char dst1[10] = "aaaaaaaaaa";
    char src1[10] = "ABCDEFGHIJ";

    memcpy(dst1,src1,5);
    printf("dst=%s\n",dst1);

    char dst2[10] = "aaaaaaaaaa";
    char src2[10] = "ABCDEFGHIJ";

    ft_memcpy(dst2,src2,5);
    printf("dst=%s\n",dst2);
 }