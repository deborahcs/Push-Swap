/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:27:04 by decabral          #+#    #+#             */
/*   Updated: 2026/03/02 09:41:07 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_stack_node *lst)
{
	t_stack_node	*tmp;
	int				count;

	count = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp -> next;
		count++;
	}
	return (count);
}
