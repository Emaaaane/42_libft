/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:39:49 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/17 22:37:35 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		n = (-1) * n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int num)
{
	int		len;
	char	*result;

	len = int_len(num);
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	len--;
	if (num == 0)
		result[0] = 48;
	if (num < 0)
	{
		num = (-1) * num;
		result[0] = '-';
	}
	while (num > 0)
	{
		result[len] = (num % 10) + 48;
		len--;
		num = num / 10;
	}
	return (result);
}

// #include <stdio.h>

// int main ()
// {
// 	int i = 24;
// 	printf("%s\n", ft_itoa(i));
// }