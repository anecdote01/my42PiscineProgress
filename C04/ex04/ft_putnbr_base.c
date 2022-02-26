/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:09:10 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/22 20:19:11 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_error(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
			return (0);
		j = i;
		while (j < ft_strlen(str))
		{
			j++;
			if (str[i] == str[j])
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		length;
	int		error;
	long	number;

	error = check_error(base);
	length = ft_strlen(base);
	number = nbr;
	if (error == 1)
	{
		if (number < 0)
		{
			ft_putchar('-');
			number *= -1;
		}
		if (number < length)
			ft_putchar(base[number]);
		if (number >= length)
		{
			ft_putnbr_base(number / length, base);
			ft_putnbr_base(number % length, base);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
}*/
