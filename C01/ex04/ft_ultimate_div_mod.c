/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <ybollen@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:03:05 by ybollen           #+#    #+#             */
/*   Updated: 2023/11/28 15:06:42 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 2;
	printf("div=%d, mod=%d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div=%d, mod=%d\n", a, b);
	return (0);
}*/
