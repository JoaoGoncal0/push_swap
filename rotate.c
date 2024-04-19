/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:07:01 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/04 17:38:58 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack_node **list)
{
	t_stack_node	*tmp;

	if (!(*list))
		return ;
	tmp = pop_first(list);
	ft_lstadd_back(list, tmp);
}

void	ra(t_stack_node **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack_node **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack_node **a, t_stack_node **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
