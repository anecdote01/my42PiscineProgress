/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:43:25 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/14 12:44:23 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	y;
	int	swap;

	y = 0;
	while (y < size - 1)
	{
		if (tab[y] > tab[y + 1])
		{
			swap = tab[y + 1];
			tab[y + 1] = tab[y];
			tab[y] = swap;
			y = 0;
		}
		else
			y++;
	}
}
