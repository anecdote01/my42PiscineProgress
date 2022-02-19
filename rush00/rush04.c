/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:26:31 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/13 15:56:56 by caucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rush(int y, int x)
{
	int	r;
	int	c;

	r = 1;
	while (r <= x && x > 0)
	{
		c = 1;
		while (c <= y && y > 0)
		{
			if ((c == 1 && r == 1) || (c == y && r == x && c != 1 && r != 1))
				ft_putchar('A');
			else if ((c == y && r == 1) || (c == 1 && r == x))
				ft_putchar('C');
			else if (c == 1 || r == 1 || c == y || r == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}	
}

int	main(void)
{
	ft_rush(4, 4);
	return (0);
}
