/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:16:05 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/22 16:09:40 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
	{
		if (s1 && !set)
			return ((char *)s1);
		return (NULL);
	}
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]) != NULL)
	{
		start++;
	}
	while (start != end && ft_strchr(set, s1[end - 1]) != NULL)
	{
		end--;
	}
	return (ft_substr(s1, start, end - start));
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s\n", ft_strtrim("xxxxx", "x"));
// }