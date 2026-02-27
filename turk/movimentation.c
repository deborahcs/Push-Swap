/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movimentation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:39:27 by decabral          #+#    #+#             */
/*   Updated: 2026/02/27 17:04:26 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	f_rotation(t_stack_node **stack, t_stack_node *head_node, char c)
{
	while (*stack != head_node)
	{
		if (c == 'a')
		{
			if (head_node->above_median)
				ra(stack, 1);
			else
				rra(stack, 1);
		}
		else if (c == 'b')
		{
			if (head_node->above_median)
				rb(stack, 1);
			else
				rrb(stack, 1);
		}
	}
}

void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node			*cheapest_node;
	bool					a_above;
	bool					b_above;

	cheapest_node = get_cheapest(*a);
	a_above = cheapest_node->above_median;
	b_above = cheapest_node->target_node->above_median;
	if (a_above && b_above)
	{
		while (*a != cheapest_node && *b != cheapest_node->target_node)
			rr(a, b);
		current_position(*a);
		current_position(*b);
	}
	else if (!a_above && !b_above)
	{
		while (*a != cheapest_node && *b != cheapest_node->target_node)
			rrr(a, b);
		current_position(*a);
		current_position(*b);
	}
	f_rotation(a, cheapest_node, 'a');
	f_rotation(b, cheapest_node->target_node, 'b');
	pb(b, a, 1);
}

void	move_b_to_a(t_stack_node **a, t_stack_node **b)
{
	f_rotation(a, (*b)->target_node, 'a');
	pa(a, b, 1);
}

void	min_on_top(t_stack_node **a)
{
	t_stack_node	*min_node;

	min_node = find_min(*a);
	while (*a != min_node)
	{
		if (min_node->above_median)
			ra(a, 1);
		else
			rra(a, 1);
	}
}
