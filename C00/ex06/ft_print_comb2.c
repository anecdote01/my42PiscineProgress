/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:23:52 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/13 13:12:44 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	firpair;
	int	secpair;

	firpair = -1;
	while (++firpair <= 99)
	{
		secpair = firpair;
		while (++secpair <= 99)
		{
			ft_putchar(firpair / 10 + '0');
			ft_putchar(firpair % 10 + '0');
			write (1, " ", 1);
			ft_putchar(secpair / 10 + '0');
			ft_putchar(secpair % 10 + '0');
			if (firpair != 98 || secpair != 99)
				write(1, ", ", 2);
		}
	}
}
