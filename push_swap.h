/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:21:16 by jomendes          #+#    #+#             */
/*   Updated: 2024/03/08 11:30:38 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h> 
# include <limits.h> 
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
// error.c

int				error_syntax(char *str);
int				error_duplicate(t_stack_node *a, int n);
void			free_stack(t_stack_node **stack);
void			free_errors(t_stack_node **a, int ac, char **av);
void			free_av(int ac, char **av);

// push_swap.c

int				main(int ac, char **av);

// pop.c

t_stack_node	*pop_first(t_stack_node **stack);
t_stack_node	*pop_last(t_stack_node **stack);

// push.c

void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **a, t_stack_node **b);

// reverse_rotate.c

void			reverse_rotate(t_stack_node **stack);
void			rra(t_stack_node **a);
void			rrb(t_stack_node **b);
void			rrr(t_stack_node **a, t_stack_node **b);

// rotate.c

void			rotate(t_stack_node **stack);
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);

// sort_three.c

void			sort_three(t_stack_node **a);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);
void			r_both(t_stack_node **a, t_stack_node **b,
					t_stack_node *cheapest_node);
void			rr_both(t_stack_node **a, t_stack_node **b,
					t_stack_node *cheapest_node);

// swap.c

void			swap(t_stack_node **stack);
void			sa(t_stack_node **a);
void			sb(t_stack_node **b);
void			ss(t_stack_node **a, t_stack_node **b);

// stack_init.c

long			ft_atol(const char *str);
void			append_node(t_stack_node **stack, int n, int ac, char **av);
void			init_stack_a(t_stack_node **a, char **av, int ac);
t_stack_node	*get_cheapest(t_stack_node *stack);
void			prep_push(t_stack_node **stack,
					t_stack_node *top_node, char stack_name);

// stack_utils.c

int				stack_len(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *stack);
bool			stack_sorted(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);

// init_a_to_b.c

void			current_index(t_stack_node *stack);
void			set_target_a(t_stack_node *a, t_stack_node *b);
void			cost_analysis_a(t_stack_node *a, t_stack_node *b);
void			set_cheapest(t_stack_node *stack);
void			init_nodes_a(t_stack_node *a, t_stack_node *b);

// init_b_to_a.c

void			set_target_b(t_stack_node *a, t_stack_node *b);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);

// sort_stacks.c

void			move_a_to_b(t_stack_node **a, t_stack_node **b);
void			move_b_to_a(t_stack_node **a, t_stack_node **b);
void			min_on_top(t_stack_node **a);
void			sort_stacks(t_stack_node **a, t_stack_node **b);

// # define malloc(x) NULL

#endif