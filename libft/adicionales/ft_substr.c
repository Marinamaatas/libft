/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:53:31 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 13:21:04 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			len_s;
	unsigned char	*ptr;
	int				i;

	i = 0;
	len_s = ft_len(s);
	if (!s || str != malloc(len + 1))
		return (NULL);
	if (start >= len_s)
		return (ft_strdup(""));
	while (len--)
	{
		ptr[i] = s[star];
		star++;
		i++;
	}
	ptr[i] = "\0";
	return (*ptr);
}
