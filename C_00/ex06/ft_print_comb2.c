/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <ybollen@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:31:05 by ybollen           #+#    #+#             */
/*   Updated: 2023/11/27 14:15:54 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char c)
{
	write(1, &c, 1);
}

void	conversion_num(int i)
{
	int	tens;
	int	ones;

	if (i < 10)
	{
		print_num('0');
		print_num(i + '0');
	}
	else
	{
		tens = i / 10;
		ones = i % 10;
		print_num(tens + '0');
		print_num(ones + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			conversion_num(i);
			print_num(' ');
			conversion_num(j);
			if (i < 98)
			{
				print_num(',');
				print_num(' ');
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
