/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:26:36 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/18 12:44:27 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

// int main()
// {
//     int a = 12002120;

// 	ft_bzero(&a, sizeof(a));

// 	ft_memset(&a, 255, 4);
// 	ft_memset(&a, 156, 1);
// 	//ft_memset((char *)&a + 1, 1, 1);

// 	printf("%d\n", a);
// }
