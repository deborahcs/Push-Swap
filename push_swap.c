/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:52:46 by decabral          #+#    #+#             */
/*   Updated: 2026/02/27 15:58:30 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stack_init(t_stack_node **a, char **matrix)
{
	long	n;
	int		i;

	i = 0;
	while (matrix[i])
	{
		if (check_syntax(matrix) == 0)
			error_exit(a, matrix);
		n = ft_atol(matrix[i]);
		if (check_overflow(n) == 0 || (check_dupli(*a, (int)n) == 0))
			error_exit(a, matrix);
		append_node(a, (int)n);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;


	a = NULL;
	b = NULL;
	if (argc == 1 || argc == 2 && !argv[1][0])
		return (1);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
	stack_init(&a, argv);


	free_stack(&a);
	if (argc == 2)
		free_matrix(argv);
}
