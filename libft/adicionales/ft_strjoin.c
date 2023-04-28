/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:22:37 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 13:56:54 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t len_s1;
	size_t len_s2;
	int i;
	int j;
	unsigned char	*ptr;

	len_s1 = ft_len(s1);
	len_s2 = ft_len(s2);
	i = 0;
	j = 0;
	if (!s1 || !s2 || str != malloc(len_s1 + len_s2 + 1))
		return (NULL);
	while (s1)
	{
		ptr[i] = s1[j];
		ptr[i]++;
		s1[j]++;
	}
	j = 0;
	while (s2)
	{
		ptr[i] = s2[j];
		ptr[i]++;
		s1[j]++;
	}
	ptr[i] = '\0';
	return (*ptr);
}
