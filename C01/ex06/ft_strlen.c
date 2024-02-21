/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <ybollen@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:11:15 by ybollen           #+#    #+#             */
/*   Updated: 2023/11/28 15:15:01 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	length_sum;

	i = 0;
	length_sum = 0;
	while (str[i] != '\0')
	{
		length_sum++;
		i++;
	}
	return (length_sum);
}
/*
int	main(void)
{
	int	length_str;
	char	*str;

	str = "Koda";
	ft_strlen(str);
	length_str = ft_strlen(str);
	printf("The length of this word is: %d", length_str);
	return (0);
}*/
