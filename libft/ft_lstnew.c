/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:23:08 by decabral          #+#    #+#             */
/*   Updated: 2026/03/02 08:55:26 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack_node	*ft_lstnew(void *content)
{
    t_stack_node  *new;

	new = malloc(sizeof(t_stack_node));
	if (!new)
		return (NULL);
	new->content = content; 
	new->next = NULL;
	return (new);
}
