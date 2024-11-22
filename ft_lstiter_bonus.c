/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:05:41 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/22 15:53:06 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp && f)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

// void	low(void *content)
// {
// 	char	*str;

// 	str = (char *)content;
// 	while (*str)
// 	{
// 		if (*str >= 'a' && *str <= 'z')
// 		{
// 			*str = *str - 32;
// 		}
// 		str++;
// 	}
// }

// int main()
// {
// 	t_list *node;
// 	//node = ft_lstnew(ft_strdup("hello"));
// 	node = ft_lstnew("hello");

// 	ft_lstiter(node, low);

// 	printf("%s", node->content);
// }