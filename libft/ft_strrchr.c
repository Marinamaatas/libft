/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:43:15 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 11:38:28 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_len(const char *str)
{
	while (*str != '\0')
		str++;
	return ((char *)str);
}

char	*ft_strrchr(const char *str, int c)
{
	const char	*size;

	size = ft_len(str);
	if (c == '\0')
		return ((char *)str);
	while (*size)
	{
		if (*size == c)
			return ((char *)size);
		size--;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[20] = "Hola caracola";
	int c = 'w';

	printf("%s", ft_strrchr(str, c));
}*/
