/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:36:21 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/09 10:32:06 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *strcpy, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		strcpy[i] = src[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}

char	*ft_strdup(char *src)
{
	char	*strcpy;

	strcpy = (char *)malloc(ft_strlen(src) + 1);
	if (strcpy != NULL)
	{
		ft_strcpy(strcpy, src);
	}
	return (strcpy);
}
/*
#include <stdio.h>

int main(void) 
{
   char *src = "Koda";
   char *test1 = "Luna and Obi";
   char *test2 = ft_strdup(test1);
   printf("%s\n", ft_strdup(src));
   printf("test1: %s\n", test1);
   printf("test2: %s\n", test2);
   return 0;
}*/
