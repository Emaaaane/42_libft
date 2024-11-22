/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:00:05 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/17 22:48:11 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (0);
}
// #include<string.h>
// #include<stdio.h>
// int main()
// {
//     const char *str = "Hello, World!";
// 	char target ='\0';

// 	char *result = ft_strrchr(str, target);
//     char *res = strrchr(str, target);
// 	printf ("avec la fonction ft_strchr :%s\n", result);
//     printf ("avec la fonction principale :%s\n", res);
// 	return (0);
// }