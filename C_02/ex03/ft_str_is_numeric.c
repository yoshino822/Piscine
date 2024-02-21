/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:18:16 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/02 14:53:43 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	 main(void)
{
	char str[] = {'1', '2', '3', '4', '5', '\0'};
	char str2[] = "1Hello";
	char str3[] = "";

	ft_str_is_numeric(str);
	printf("%d\n", ft_str_is_numeric(str));
	ft_str_is_numeric(str2);
	printf("%d\n", ft_str_is_numeric(str2));
	ft_str_is_numeric(str3);
	printf("%d\n", ft_str_is_numeric(str3));
	return (0);
}*/
