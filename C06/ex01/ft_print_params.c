/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 00:14:51 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/23 00:21:06 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	while (++x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
			write(1, &argv[x][y++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
