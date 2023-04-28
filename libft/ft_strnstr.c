/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:46:13 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 11:37:48 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while ((str[i + j] == to_find[j]) && (j < nb))
			{
				j++;
				if (to_find[j] == '\0' || j >= nb)
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[20] = "Hola caracola";
	char	to_find[20] = "carat";

	printf("%s", ft_strstr(str, to_find, 5));
}*/
