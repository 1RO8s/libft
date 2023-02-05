/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagasak <hnagasak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:13:57 by hnagasak          #+#    #+#             */
/*   Updated: 2023/02/05 19:40:13 by hnagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    const char *result;
    result = s;
    while(*result){
        //printf("%c,",*s);
        if(*result == c){
            //printf("%c!!,",*s);
            return (char *)result;
        }
        result++;
    }
    //printf("\n%s,%d\n",s,c);
    return NULL;
}

#include <string.h>

int main(void)
{
    char *str = "ABCDEFGHIJKLMN";
    printf("%c(%p)\n",*strchr(str,'D'),strchr(str,'D'));
    printf("%c(%p)\n",*ft_strchr(str,'D'),ft_strchr(str,'D'));
}