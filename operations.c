/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:27:38 by decabral          #+#    #+#             */
/*   Updated: 2026/02/26 21:16:21 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_max(t_stack_node *stack)
{
	int	max;
	t_stack_node	*max_node;

	if (!stack)
		return (NULL);
	max = INT_MIN;
	while(stack)
    {
		if (stack->nbr >= max)
		{
			max = stack->nbr;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}
t_stack_node	*find_min(t_stack_node *stack)
{
	int	min;
	t_stack_node	*min_node;

	if (!stack)
		return (NULL);
	min = INT_MAX;
	while(stack)
	{
		if (stack->nbr <= min)
		{
			min = stack->nbr;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

