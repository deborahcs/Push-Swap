/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:33:11 by decabral          #+#    #+#             */
/*   Updated: 2026/03/02 09:54:23 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_stack_node *lst, void(*f)(void*))
{
	t_stack_node	*tmp;

	tmp = lst;
	while (tmp)
	{
		f((void *)(long)tmp->nbr);
		tmp = tmp->next;
	}
}
