/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:00:26 by mkorucu           #+#    #+#             */
/*   Updated: 2022/03/02 15:36:26 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = malloc((ft_strlen(src)) * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}
/*
int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*inputs;

	inputs = ft_strs_to_tab(--argc, ++argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", inputs[index].str, inputs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", inputs[index].copy, inputs[index].copy);
		printf("\t|     size : %d\n", inputs[index].size);
		index++;
	}
}*/
