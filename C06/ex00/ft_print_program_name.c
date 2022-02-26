/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 00:11:04 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/23 00:13:16 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;

	x = 0;
	while (argv[0][x] != '\0')
		write(1, &argv[0][x++], 1);
	return (0);
}
