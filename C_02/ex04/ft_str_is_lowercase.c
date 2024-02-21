/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:29:22 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/02 14:54:08 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char str[] = "hello";
	char str2[] = "hEllo";
	char str3[] = "";

	ft_str_is_lowercase(str);
	printf("%d\n", ft_str_is_lowercase(str));
	ft_str_is_lowercase(str2);
	printf("%d\n", ft_str_is_lowercase(str2));
	ft_str_is_lowercase(str3);
	printf("%d\n", ft_str_is_lowercase(str3));
	return (0);
}*/
