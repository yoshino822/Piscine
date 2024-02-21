/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:03:11 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/02 14:54:31 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "HELLO";
	char str2[] = "hello";
	char str3[] = "Hello";

	ft_str_is_uppercase(str);
	printf("%d\n", ft_str_is_uppercase(str));
	ft_str_is_uppercase(str2);
	printf("%d\n", ft_str_is_uppercase(str2));
	ft_str_is_uppercase(str3);
	printf("%d\n", ft_str_is_uppercase(str3));
	return (0);
}*/
