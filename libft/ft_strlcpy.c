/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:30:44 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 11:37:17 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (i < (size -1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		count++;
	return (count);
}

/*#include <stdio.h>
int	main(void)
{
	char	dest[100] = "Holita ";
	char	src[100] = "que tal??";
	printf ("%d", ft_strlcpy ( dest, src, 10));
}*/