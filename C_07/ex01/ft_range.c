/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:33:40 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/09 13:20:56 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	arr = (int *)malloc(sizeof(int) * ((max - min) + 1));
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main()
{
	int	i;
	int	*arr;

	i = 0;
	arr = ft_range(5, 10);
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/