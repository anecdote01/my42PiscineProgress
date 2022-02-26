/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 00:22:34 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/23 00:33:52 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int x;
	int y;

	x = argc;
	while (--x > 0)
	{
		y = 0;
		while (argv[x][y] != '\0')
			write(1, &argv[x][y++],1);
		write(1, "\n", 1);
	}
}
