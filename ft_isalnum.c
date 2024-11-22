/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:49:48 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/09 10:02:28 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}
// #include<stdio.h>
// int main()
// {
//     printf("%d\n", ft_isalnum('b'));
//     printf("%d\n", ft_isalnum(1));
//     printf("%d\n", ft_isalnum('@'));
// }
