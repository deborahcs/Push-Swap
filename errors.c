/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:59:54 by decabral          #+#    #+#             */
/*   Updated: 2026/02/06 16:55:02 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// se n for int
// se um dos args for maior que o int max/min
// se houver args duplicados

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

//int	check_overflow()

int	check_dupli(t_stack_node *stack, int n)//recebe o inicio da lista e o num a ser visto
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