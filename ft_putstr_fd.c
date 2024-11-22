/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:16:55 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/18 12:44:32 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

// #include <fcntl.h>
// #include <stdio.h>

// int main()
// {
// 	int fd = open("teSt.txt", O_WRONLY | O_CREAT, 0777);
// 	ft_putstr_fd("hello wrld", fd);
// 	close(fd);
// }