/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:09:45 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/22 16:07:32 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && (unsigned char)s1[i] == (unsigned char)s2[i]
		&& i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// int main()
// {
//     // char s1[] = "\x32\xf0";
//     // char s2[] = "\x32";
//     int res = ft_strncmp("hello","hella",4);
//     int res2 = strncmp("hello","hella",4);
//     printf("le resultat de ft_strncmp est : %d\n", res);
//     printf("le resultat de fontion principale est : %d\n", res2);
// }