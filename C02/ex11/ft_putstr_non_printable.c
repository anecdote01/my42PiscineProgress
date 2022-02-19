/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:55:01 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/16 17:21:18 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_hexa(unsigned char c)
{
	c += '0';
	if (c > '9')
		c = 'a' + (c - '9' - 1);
	write(1, &c, 1);
}

void	ft_hexa_convert(unsigned char c)
{
	write(1, "\\", 1);
	ft_put_hexa((int)c / 16);
	ft_put_hexa((int)c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str < 127)
			write(1, str, 1);
		else
			ft_hexa_convert(*str);
		str++;
	}
}
