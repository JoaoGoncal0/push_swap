/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:26:45 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/04 18:22:47 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest_node;

	if (!(*a) || !(*b))
		return ;
	cheapest_node = get_cheapest(*a);
	if (cheapest_node->above_median && cheapest_node->target_node->above_median)
		r_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_median) 
		&& !(cheapest_node->target_node->above_median))
		rr_both(a, b, cheapest_node);
	prep_push(a, cheapest_node, 'a');
	prep_push(b, cheapest_node->target_node, 'b');
	pb(a, b);
}

void	move_b_to_a(t_stack_node **a, t_stack_node **b)
{
	if (!(*a) || !(*b))
		return ;
	prep_push(a, (*b)->target_node, 'a');
	pa(a, b);
}

void	min_on_top(t_stack_node **a)
{
	if (*a == NULL)
		return ;
	while ((*a)->nbr != find_min(*a)->nbr)
	{
		if (find_min(*a)->above_median)
			ra(a);
		else
			rra(a);
	}
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(a, b);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(a, b);
	while (len_a-- > 3 && !stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}
