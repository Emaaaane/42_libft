/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:29:30 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/17 22:46:37 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while (str1[i] == str2[i] && i < n - 1)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
// int main()
// {
//     char str1[] = "hola mes amores";
//     char str2[] = "hello my friends";
//     printf("le res de ft_memcmp est : %d\n", ft_memcmp(str1,str2, 2));
//     printf("le res de memcmp est : %d\n", memcmp(str1,str2, 2));
// }
