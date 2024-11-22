/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:32:47 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/16 16:24:34 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int main()
// {
//     char s[] = "hello world";
//     printf("%s\n", s);
//     ft_bzero(s, 11);
//     printf("%s\n", s);
//     printf("avec fonctions principal:%s\n",bzero(s,11));
//     return(0);
// }