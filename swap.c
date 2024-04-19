/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:05:18 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/04 17:54:53 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack_node **stack)
{
	t_stack_node	*tmp1;
	t_stack_node	*tmp2;

	if (!(*stack))
		return ;
	tmp1 = pop_first(stack);
	tmp2 = pop_first(stack);
	ft_lstadd_front(stack, tmp1);
	ft_lstadd_front(stack, tmp2);
}

void	sa(t_stack_node **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack_node **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
