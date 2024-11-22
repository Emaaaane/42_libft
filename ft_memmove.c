/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:52:10 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/18 16:07:57 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}

// #include <stdio.h>
// int main()
// {
//     char str[] = "hello world!";
//     char str2[] = "hello world!";
//     printf("%s\n", ft_memmove(str + 2, str,5));
// printf("%s\n", memmove(str2 + 2, str2,5));
//     return(0);
// }