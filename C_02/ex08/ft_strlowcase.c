/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:15:04 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/02 14:56:30 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "HELLO";
	char	str2[] = "HEllo";

	ft_strlowcase(str);
	printf("%s\n", ft_strlowcase(str));
	ft_strlowcase(str2);
	printf("%s\n", ft_strlowcase(str2));
	return (0);
}*/
