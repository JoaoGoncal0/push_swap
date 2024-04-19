/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:35:59 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/04 17:13:26 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*pop_first(t_stack_node **stack)
{
	t_stack_node	*tmp;

	if (!(*stack))
		return (NULL);
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	return (tmp);
}

t_stack_node	*pop_last(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*tmp2;

	tmp2 = *stack;
	tmp = ft_lstlast(*stack);
	while (tmp2->next != tmp)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
	return (tmp);
}
