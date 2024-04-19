/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:08:31 by jomendes          #+#    #+#             */
/*   Updated: 2024/02/22 17:39:38 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	if (*lst == NULL)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	ft_lstadd_back(&((*lst)->next), new);
// }

void	ft_lstadd_back(t_stack_node **lst, t_stack_node *new)
{
	t_stack_node	*current;

	current = *lst;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
