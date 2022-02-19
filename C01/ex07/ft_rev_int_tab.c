/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:28:54 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/14 13:12:21 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	x = 0;
	size--;
	while (x < size)
	{
		swap = tab[x];
		tab[x] = tab[size];
		tab[size] = swap;
		x++;
		size--;
	}
}
int	main(void)
{
	int a[6] = {1,4,5,23,-32,3233};
	ft_rev_int_tab(a,6);
	printf("%d, %d, %d, %d, %d, %d\n",a[0],a[1],a[2],a[3],a[4],a[5]);
}
