/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:11:37 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 11:31:12 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*dest2;
	unsigned char	*src2;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (src < dest)
	{
		while (n < 0)
		{
			*dest2 = *src2;
			n--;
			*dest2++;
			*src2++;
		}
	}
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
	printf ("Antes de memmove %s\n", dest);
	ft_memmove(dest, src, 4);
	printf ("Despues de memmove %s\n", dest);
}*/