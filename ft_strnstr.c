/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:47:48 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/17 22:48:05 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
	{
		return ((char *)haystack);
	}
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//  char str[] = "Hello, this is a simple example.";
//  char substr[] = "simple";
//  printf("le resultat de ft_strnstr est : %s\n", ft_strnstr(str,substr,20));
//  //printf("le resultat de ft_strnstr est : %s\n", strnstr(str,"", 30));
// }
