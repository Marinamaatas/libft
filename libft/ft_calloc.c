/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:29:18 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 17:05:19 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	void*	alloc;

	alloc = malloc(count * size);
	if (alloc == NULL)
		return (NULL);
	else  
		ft_bezero(alloc, count *size)
	return (alloc);
}
