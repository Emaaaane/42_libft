/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:11:19 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/18 12:55:23 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (dst != NULL)
		i = ft_strlen(dst);
	if (dstsize <= i || dstsize == 0)
		return (dstsize + ft_strlen(src));
	while (src[j] && j < dstsize - i - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char dest[10] = "hello word";
// 	printf("-->%zu\n", ft_strlcat(NULL, "hello", 0));
// 	// printf("-->%zu\n", strlcat(NULL, "hello", 0));
// 	return (0);
// }