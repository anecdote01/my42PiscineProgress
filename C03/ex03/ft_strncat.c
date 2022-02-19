/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:54:24 by mehmetsoner       #+#    #+#             */
/*   Updated: 2022/02/19 22:13:02 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    unsigned int x;
    i = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    while (*src != '\0' && x < nb)
    {
        dest[i] = *src;
        i++;
        src++;
        x++;
    }
    dest[i] = '\0';
    return (dest);
/*
int main(void)
{
    char ex1[] = "ali";
    char ex2[] = " amca";
    printf("%s\n",ft_strncat(ex1,ex2,3));
}*/