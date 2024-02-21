/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:19:17 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/04 18:19:21 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	while (result != nb)
	{
		i++;
		result = i * i;
		if (i > nb || i > 46340)
		{
			return (0);
		}
	}
	return (i);
}
/*
int	main()
{
	printf("%d\n", ft_sqrt(9));
	return (0);
}*/