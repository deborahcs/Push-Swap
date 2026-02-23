/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:59:54 by decabral          #+#    #+#             */
/*   Updated: 2026/02/23 18:00:56 by decabral         ###   ########.fr       */
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


int	check_dupli(t_stack_node *stack, int n)//recebe o ini da list e o num a ser visto 
{
	if (!stack)// se a stack estiver vazia, "ok"
		return (1);
	while (stack)//enquanto a stack for válida
	{
		if (stack->nbr == n) // o num na lista é o num que esta sendo testado?
			return (0); // se sim, erro
		stack = stack->next; // vamos ver o proximo 
	}
	return (1);
}
