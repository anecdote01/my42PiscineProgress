/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 00:38:42 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/23 00:48:12 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int strcmp(char **arg1,char **arg2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (arg1[i][j] != '\0' && arg2[i][j] != '\0')
		j++;
}

int	main(int argc, char **argv)
{
	
}
