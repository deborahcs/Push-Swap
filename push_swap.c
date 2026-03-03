/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:52:46 by decabral          #+#    #+#             */
/*   Updated: 2026/03/03 12:01:30 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_stack_node **a, char **matrix, int is_split)
{
	long	n;
	int		i;

	i = 0;
	if (!matrix || !matrix[0])
		error_exit(a, matrix, is_split);
	if (check_syntax(matrix) == 0)
		error_exit(a, matrix, is_split);
	while (matrix[i])
	{
		n = ft_atol(matrix[i]);
		if (check_overflow(n) == 0 || (check_dupli(*a, (int)n) == 0))
			error_exit(a, matrix, is_split);
		append_node(a, (int)n);
		i++;
	}
	if (is_split)
		free_matrix(matrix);
}

void	sorting(t_stack_node **a, t_stack_node **b)
{
	int	size;

	if (is_stack_sorted(*a))
		return ;
	size = lstsize(*a);
	if (size == 2)
		sa(a, 1);
	else if (size == 3)
		sort_three(a);
	else
		sort_stacks(a, b);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
	{
		if (argc == 2 && !argv[1][0])
			write(2, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
		stack_init(&a, ft_split(argv[1], ' '), 1);
	else
		stack_init(&a, argv + 1, 0);
	sorting(&a, &b);
	free_stack(&a);
	return (0);
}
