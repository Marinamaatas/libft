/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:17:29 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 11:44:13 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*dest2;
	unsigned char	*src2;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int main()
{
	char dest[20] = "Hello world";
	char src [20] = "Hola";
	printf ("Antes de memcpy %s\n", dest);
	ft_memcpy(dest, src, 4);
	printf ("Despues de memcpy %s\n", dest);
}*/