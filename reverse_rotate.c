/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:07:38 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/04 17:38:39 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack_node **list)
{
	t_stack_node	*tmp;

	if (!(*list))
		return ;
	tmp = pop_last(list);
	ft_lstadd_front(list, tmp);
}

void	rra(t_stack_node **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack_node **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
