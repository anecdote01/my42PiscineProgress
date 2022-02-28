/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:40:02 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/27 11:28:12 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	x;

	x = 0;
	if (min >= max)
		return (0);
	a = (int *)malloc((max - min) * sizeof(int));
	if (!a)
		return (0);
	while (min < max)
		a[x++] = min++;
	return (a);
}
/*
int        main(void)
{
    int    min;
    int    max;
    int    *tab;
    int    i = 0;
    int    size;

    min = 5;
    max = 10;
    size = max - min;
    tab = ft_range(min, max);
    while(i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }

}*/
