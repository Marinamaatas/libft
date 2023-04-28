/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:59:44 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 11:28:33 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str2;

	str2 = (unsigned char *)str;
	while (n > 0)
	{
		if (*str2 == (unsigned char)c)
			return (*str2);
		else
			n--;
	}
	return (NULL);
}
