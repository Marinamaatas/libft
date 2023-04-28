/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:48:47 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 11:31:46 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < len)
	{
		ptr[i] = (unsigned char *)c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
int main()
{
	char str[20] = "Hello world";
	printf ("Antes de memset %s\n", str);
	ft_memset(str, 0, 8)
	printf ("Despues de memset %s\n", str);
}*/