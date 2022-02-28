/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:45:27 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/26 12:24:51 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(len * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_strdup(av[1]));
	return (0);
}*/
