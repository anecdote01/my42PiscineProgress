/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:06:08 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/22 20:01:29 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	digits;
	int	number[10];

	digits = 0;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (0 < nb)
	{
		number[digits++] = nb % 10;
		nb /= 10;
	}
	while (0 < digits)
	{
		ft_putchar(number[--digits] + 48);
	}
}
/*
int main()
{
	ft_putnbr(0);
	return 0;
}*/
