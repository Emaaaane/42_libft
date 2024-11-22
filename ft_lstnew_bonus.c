/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:18:46 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/17 22:46:22 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
	{
		return (NULL);
	}
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
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

//     while(node1)
//     {
//         printf("%d\n", *(int *)node1->content);
// 		node1 = node1->next;
//     }

// }