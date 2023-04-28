/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:35:51 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 11:39:48 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strdup(const char *str)
{
	char*	alloc;
	size_t	len;

	len = ft_strlen.c(str);
	alloc = (char *)malloc(len * sizeof(char))
	if (alloc == NULL)
		return (NULL);
	ft_memcpy(alloc, s1, len);
	return (alloc);
}
