/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:22:23 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/09 15:22:27 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min) + 1);
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (max - min);
}

#include <stdio.h>

int main()
{
    int i;
    int *arr;
    int size;

    i = 0;
    size = ft_ultimate_range(&arr, 5, 20);
	printf("%d\n", size);    
while (i < 20)
    {
        printf("%d ", arr[i]);
        i++;
    }
    free(arr);
    return 0;
}*/