/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:49:30 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/17 22:47:39 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
//     char src[] = "hello world";
//     char dst[] = "";
//     printf("%d",ft_strlcpy(dst,src,9));

// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char src[] = "Hello, World!";
//     char dest[] = ""; // Ensure enough space for the copied string

//     // strcpy(dest, src);
//     printf("Copied string: %s\n", strcpy(dest, src));
//     // printf("%d",ft_strlcpy(dest,src,9));

//     return (0);
// }
