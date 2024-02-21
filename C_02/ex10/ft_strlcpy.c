/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:50:30 by ybollen           #+#    #+#             */
/*   Updated: 2023/12/11 16:48:46 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count_src;

	i = 0;
	count_src = 0;
	while (src[count_src])
		count_src++;
	if (size < 1)
		return (count_src);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count_src);
}

int main(void)
{
	char src[] = "Hello, World!";
	char dest[20];
	unsigned int size = 10;
	unsigned int copied = ft_strlcpy(dest, src, size);
	printf("Copied String: %s\n", dest);
	printf("Number of Characters Copied: %u\n", copied);
    return (0);
}
