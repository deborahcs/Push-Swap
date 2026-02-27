/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 14:01:15 by decabral          #+#    #+#             */
/*   Updated: 2026/02/27 16:59:17 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_syntax(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
		{
			j++;
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (0);
		}
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_overflow(long num)
{
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}

int	check_dupli(t_stack_node *stack, int n)
{
	if (!stack)
		return (1);
	while (stack)
	{
		if (stack->nbr == n)
			return (0);
		stack = stack->next;
	}
	return (1);
}
