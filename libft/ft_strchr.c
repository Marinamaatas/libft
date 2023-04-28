/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:52:35 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 11:32:07 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	if (c == '\0')
		return ((char *)str);
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[20] = "Hola caracola";
	int c = 'o';

	printf("%s", ft_strchr(str, c));
}*/