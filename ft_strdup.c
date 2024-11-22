/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:36:18 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/17 22:47:24 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;
	int		len;

	len = 0;
	while (s1[len])
	{
		len++;
	}
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
//     char str[] = "hola mes amores";
//     printf("%s\n", ft_strdup(str));
//     printf("%s\n", strdup(str));
// }