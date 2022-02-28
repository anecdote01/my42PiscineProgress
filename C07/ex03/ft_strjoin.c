/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:48:09 by mkorucu           #+#    #+#             */
/*   Updated: 2022/02/27 11:21:47 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
}

int	ft_strsize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_fullsize(char **str, int size, char *sep)
{
	int	i;
	int	fullsize;

	i = 0;
	fullsize = 0;
	while (i < size)
	{
		fullsize += ft_strsize(str[i]);
		fullsize += ft_strsize(sep);
		i++;
	}
	fullsize -= ft_strsize(sep);
	return (fullsize);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	char	*ptr;
	int		i;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	string = (char *)malloc((ft_fullsize(strs, size, sep) + 1) * sizeof(char));
	ptr = string;
	if (ptr == 0)
		return (0);
	while (i < size)
	{
		ft_strcpy(string, strs[i]);
		string += ft_strsize(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(string, sep);
			string += ft_strsize(sep);
		}
		i++;
	}
	*string = '\0';
	return (ptr);
}

int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = "\n";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
 }
