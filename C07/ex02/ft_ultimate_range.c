/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:56:11 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/27 10:56:53 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int	i;
	int	diff;

	i = -1;
	diff = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	a = (int *)malloc(diff * sizeof(int));
	if (!a)
	{
		*range = 0;
		return (-1);
	}
	*range = a;
	while (++i < diff)
		a[i] = min + i;
	return (diff);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

 }*/
