/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:23:08 by decabral          #+#    #+#             */
/*   Updated: 2026/03/01 19:25:27 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list  *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content; 
	new->next = NULL;
	return (new);
}
