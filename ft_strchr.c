/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:00:13 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/17 22:47:18 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)s + i);
	}
	return (0);
}

// #include<stdio.h>

//  int main() {
// 	const char *str = "Hello, World!";
// 	char target = 'o';

// 	char *result = ft_strchr(str, target);
//     char *res = strchr(str, target);
// 	printf ("avec la fonction ft_strchr :%s\n", result);
//     printf ("avec la fonction principale :%s\n", res);
// 	return (0);
//  }