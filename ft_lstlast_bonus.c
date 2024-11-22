/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:32:54 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/14 23:42:41 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main()
// {
//     int a = 5;
//     int b = 10;
//     int c = 15;
//     int d = 100;

//     t_list *node = ft_lstnew(&a);
//     t_list *node1 = ft_lstnew(&b);
//     t_list *node2 = ft_lstnew(&c);
//     t_list *node3 = ft_lstnew(&d);

//     node ->next = node1;
//     node1 -> next = node2;
//     node2->next=node3;

//     printf("%d\n", *(int *)ft_lstlast(node)->content);

// }