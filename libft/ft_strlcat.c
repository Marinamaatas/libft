/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:48:19 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 11:33:28 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

size_t	*ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*s;
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	while (s[i] != '\0' && (len_dest + 1) < size)
	{
		dest[len_dest] = s[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	if (size > len_dest)
		return (len_src + len_dest);
	else
		return (len_src + size);
}

/*#include <stdio.h>
int	main(void)
{
	char	dest[100] = "Holita ";
	char	src[100] = "que tal??";
	printf ("%d", ft_strlcat ( dest, src, 10));
}*/