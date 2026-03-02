/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:30:43 by decabral          #+#    #+#             */
/*   Updated: 2026/03/02 09:31:56 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_stack_node *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del((void *)(long)lst->nbr);
	free(lst);
}
