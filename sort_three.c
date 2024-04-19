/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:33:58 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/08 11:39:42 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack_node **a)
{
	t_stack_node	*biggest_node;

	if (!(*a))
		return ;
	biggest_node = find_max(*a);
	if ((*a)->nbr == biggest_node->nbr)
		ra(a);
	else if ((*a)->next->nbr == biggest_node->nbr)
		rra(a);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}

void	r_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
		rr(a, b);
	current_index(*a);
	current_index(*b);
}

void	rr_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node) 
		rrr(a, b);
	current_index(*a);
	current_index(*b);
}
