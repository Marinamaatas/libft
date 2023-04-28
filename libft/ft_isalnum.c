/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:21:39 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 09:55:20 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	i;

	if (c >= 'a' && c <= 'z' || c >= 'A' && c >= 'Z' || c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int main (void)
{
	printf("%d", ft_isalpha('1'));
}*/
