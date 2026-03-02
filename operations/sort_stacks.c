/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 23:28:04 by decabral          #+#    #+#             */
/*   Updated: 2026/03/02 14:54:30 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_node_a(t_stack_node *a, t_stack_node *b)
{
	current_position(a);
	current_position(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	set_cheapest(a);
}

static void	init_node_b(t_stack_node *a, t_stack_node *b)
{
	current_position(a);
	current_position(b);
	set_target_b(a, b);
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	size_a;

	size_a = ft_lstsize(*a);
	if (size_a > 3)
		pb(b, a, 1);
	if (size_a > 4)
		pb(b, a, 1);
	while (ft_lstsize(*a) > 3)
	{
		init_node_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_node_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_position(*a);
	min_on_top(a);
}
