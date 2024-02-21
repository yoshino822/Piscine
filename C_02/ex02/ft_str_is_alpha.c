/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:06:51 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/02 17:20:45 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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
   char str[] = "HelloWorld";
   char str2[] = {'a', 'b', 'c', 'd', 'e', '\0'};
   char str3[] = "Hello12World";
   char str4[] = {'1', '2', '3', '4', '5', '\0'};
   char str5[] = "";

   printf("%d\n", ft_str_is_alpha(str));
   printf("%d\n", ft_str_is_alpha(str2));
   printf("%d\n", ft_str_is_alpha(str3));
   printf("%d\n", ft_str_is_alpha(str4));
   printf("%d\n", ft_str_is_alpha(str5));
   return (0);
}*/
