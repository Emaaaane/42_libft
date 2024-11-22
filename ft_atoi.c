/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:17:49 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/22 15:50:57 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_overflow(long res, int nb, int signe)
{
	if (signe == 1)
	{
		if ((res >= 922337203685477580 && nb > 7) || res >= 922337203685477581)
			return (-1);
	}
	if (signe == -1)
	{
		if ((res >= 922337203685477580 && nb > 8) || res > 922337203685477581)
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	long	signe;
	int		i;
	long	res;

	i = 0;
	signe = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (is_overflow(res, str[i] - '0', signe) != 1)
			return (is_overflow(res, str[i] - '0', signe));
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * signe);
}
