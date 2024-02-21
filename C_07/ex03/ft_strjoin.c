/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:43:19 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/12 11:00:27 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	concat_all(char *result, char **strs, char *sep, int size)
{
	int	i;

	i = 0;
	result[0] = '\0';
	while (i < size - 1)
	{
		ft_strcat(result, strs[i++]);
		ft_strcat(result, sep);
	}
	ft_strcat(result, strs[i]);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		len;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i++]);
	}
	len = len + (size - 1) * ft_strlen(sep);
	result = (char *)malloc(sizeof(char) * len);
	concat_all(result, strs, sep, size);
	return (result);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*sep;
	char	*strings;

	sep = "++";
	strings = ft_strjoin(argc, argv, sep);
	printf("%s", strings);
	free(strings);
	return (0);
}
