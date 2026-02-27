/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:53:50 by decabral          #+#    #+#             */
/*   Updated: 2026/02/27 17:03:01 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h> 
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;	
}	t_stack_node;
//Checagem
int	check_syntax(char **argv);
int	check_overflow(long num);
int	check_dupli(t_stack_node *stack, int n);
//Free
void	free_stack(t_stack_node **stack);
void	free_matrix(char **matrix);
//Ordenção
void	sa(t_stack_node **a, int print);
void	sb(t_stack_node **b, int print);
void	ss(t_stack_node **a, t_stack_node **b);
void	push(t_stack_node **dest, t_stack_node **src);
void	pa(t_stack_node **a, t_stack_node **b, int print);
void	pb(t_stack_node **b, t_stack_node **a, int print);
void	rotate(t_stack_node **stack);
void	ra(t_stack_node **a, int print);
void	rr(t_stack_node **a, t_stack_node **b);
void	rev_rotate(t_stack_node **stack);
void	rra(t_stack_node **a, int print);
void	rrr(t_stack_node **a, t_stack_node **b);

#endif