/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:53:50 by decabral          #+#    #+#             */
/*   Updated: 2026/03/03 15:47:36 by decabral         ###   ########.fr       */
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
/* Inicialização e Funções Principais (push_swap.c) */
void			stack_init(t_stack_node **a, char **matrix, int is_split);
void			sorting(t_stack_node **a, t_stack_node **b);
long			ft_atol(const char *str);
char			**ft_split(char const *s, char c);

/* Checagem de Erros (checks.c) */
int				check_syntax(char **argv);
int				check_overflow(long num);
int				check_dupli(t_stack_node *stack, int n);
bool			is_stack_sorted(t_stack_node *stack);

/* Gestão de Memória e Erros (errors.c ou push_swap.c) */
void			error_exit(t_stack_node **a, char **matrix, int is_split);
void			free_stack(t_stack_node **stack);
void			free_matrix(char **matrix);

/* Movimentos Básicos (swap.c, push.c, rotate.c, rev_rotate.c) */
void			sa(t_stack_node **a, int print);
void			sb(t_stack_node **b, int print);
void			ss(t_stack_node **a, t_stack_node **b);
void			pa(t_stack_node **a, t_stack_node **b, int print);
void			pb(t_stack_node **b, t_stack_node **a, int print);
void			ra(t_stack_node **a, int print);
void			rb(t_stack_node **b, int print);
void			rr(t_stack_node **a, t_stack_node **b);
void			rra(t_stack_node **a, int print);
void			rrb(t_stack_node **b, int print);
void			rrr(t_stack_node **a, t_stack_node **b);

/* Utilidades de Pilha (stack_utils.c) */
int				lstsize(t_stack_node *lst);
t_stack_node	*find_max(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *stack);
void			append_node(t_stack_node **stack, int n);

/* Algoritmo Turk (analysing.c, movimentation.c, sort_stacks.c) */
void			current_position(t_stack_node *stack);
void			set_target_a(t_stack_node *a, t_stack_node *b);
void			set_target_b(t_stack_node *a, t_stack_node *b);
void			cost_analysis_a(t_stack_node *a, t_stack_node *b);
void			set_cheapest(t_stack_node *stack);
t_stack_node	*get_cheapest(t_stack_node *stack);
void			move_a_to_b(t_stack_node **a, t_stack_node **b);
void			move_b_to_a(t_stack_node **a, t_stack_node **b);
void			min_on_top(t_stack_node **a);
void			sort_stacks(t_stack_node **a, t_stack_node **b);
void			sort_three(t_stack_node **a);

#endif