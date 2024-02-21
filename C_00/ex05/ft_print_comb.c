/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <ybollen@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:26:25 by ybollen           #+#    #+#             */
/*   Updated: 2023/11/27 14:32:57 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char c)
{
	write(1, &c, 1);
}

void	conversion_num(char i, char j, char k)
{
	print_num(i + '0');
	print_num(j + '0');
	print_num(k + '0');
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			c = j + 1;
			while (c <= 9)
			{
				conversion_num(i, j, c);
				if (i != 7 || j != 8 || c != 9)
				{
					print_num(',');
					print_num(' ');
				}
				c++;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
