/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:07:05 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 09:51:46 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *s, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
int main()
{
	char str[20] = "Hello world";
	printf ("Antes de memset %s\n", str);
	ft_bzero(str, 0, 8)
	printf ("Despues de memset %s\n", str);
}*/
