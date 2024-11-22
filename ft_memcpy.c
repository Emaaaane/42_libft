/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:50:29 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/22 15:59:14 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "hello world!";
//     printf("Resultat avec ft_memcpy est: %s\n", ft_memcpy(str, str, 5));
//     printf("Resultat avec memcpy est: %s\n", memcpy(str, str, 5));
//     return(0);
// }