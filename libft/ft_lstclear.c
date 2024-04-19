/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:05:47 by jomendes          #+#    #+#             */
/*   Updated: 2024/02/22 17:44:34 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_stack_node **lst)
{
	t_stack_node	*new_node;

	while (*lst)
	{
		new_node = (*lst)->next;
		free(*lst);
		*lst = new_node;
	}
}
