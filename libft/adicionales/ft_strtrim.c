/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumatas- <lumatas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:58:09 by lumatas-          #+#    #+#             */
/*   Updated: 2023/04/28 16:09:33 by lumatas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
 {
	int start;
	int len_s1;
	int i;
	unsigned char *ptr;
	char *result;
	
	i = 0;
	len_s1 = ft_strlen(s1);
	if (!s1 || s1 != malloc(len_s1 + 1))
		return (NULL);
	while (s1[start] = set)
		start++;
	if (start == len_s1)
		return (ft_strdup(""));
	while (s1[len_s1] = set)
		len_s1--;
	if (len_s1 == 0)
		return (ft_strdup(""));
	result = ft_substr(s1, start, (len_s1 - start));
	return(result);
 }
 
 #include <stdio.h>
 
 int main()
 {
	char *str;
	str = "¡¡¡¡¡Holaaa¡¡¡¡¡";
	ft_strtrim(str, "¡");
 }