/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:41:07 by hnagasak          #+#    #+#             */
/*   Updated: 2023/01/31 20:21:19 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *p = s;
    while (n--)
        *(p++) = (unsigned char) 0;
    // return b;
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    char s1[11] = "aaaaaa";
    printf(" s1 = [%s]\n",s1);
    bzero(s1,3);
    printf(" s1 = [%s]\n",s1);

    char s2[11] = "bbbbbb";
    printf(" s1 = [%s]\n",s2);
    bzero(s2,3);
    printf(" s1 = [%s]\n",s2);
}