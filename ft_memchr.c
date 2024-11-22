/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:43:49 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/17 22:46:29 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[] = "hello world!";
//     char str2[] = "hello world!";
//     printf("%s\n", ft_memchr(str, 0,3));
//     printf("%s\n", memchr(str2,0,3));
// }