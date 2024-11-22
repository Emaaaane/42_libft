/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:45:20 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/18 10:16:30 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// int main ()
// {
// 	t_list	*tab;
// 	t_list	*node1;
// 	node1 = ft_lstnew("hey");
// 	ft_lstadd_front(&tab, node1);
// 	printf("%s", tab->content);
// }