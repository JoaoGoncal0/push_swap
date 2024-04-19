/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:05:57 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/04 17:13:46 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*tmp;

	if (!(*b))
		return ;
	tmp = pop_first(b);
	ft_lstadd_front(a, tmp);
	ft_printf("pa\n");
}

void	pb(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*tmp;

	if (!(*a))
		return ;
	tmp = pop_first(a);
	ft_lstadd_front(b, tmp);
	ft_printf("pb\n");
}
