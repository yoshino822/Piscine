/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:29:59 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/02 14:57:19 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	conversion(char c, int start)
{
	if (start == 1 && c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	else if (start == 0 && c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
	{
		start = 1;
	}
	else
	{
		start = 0;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 1;
	while (str[i] != '\0')
	{
		str[i] = conversion(str[i], start);
		if ((str[i] > '9' && str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a'))
		{
			start = 1;
		}
		else if (str[i] < '0' || str[i] > 'z')
		{
			start = 1;
		}
		else
		{
			start = 0;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "salut, comment tu vas? 42mots quaRante-Deux; cinquante+Et+un";

	ft_strcapitalize(str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/
