/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:13:14 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/14 22:20:45 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
// #include <stdio.h>
// int main()
// {
//     int a = 3;
//     int b = 5;
//     int c = 9;
//     int d = 10;

//     t_list *node1 = ft_lstnew(&a);
//     t_list *node2 = ft_lstnew(&b);
//     t_list *node3 = ft_lstnew(&c);
//     t_list *node4 = ft_lstnew(&d);

// 	node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;

//     int size = ft_lstsize(node1);
//     printf("%d\n", size);

// }
