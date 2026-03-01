/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:36:39 by decabral          #+#    #+#             */
/*   Updated: 2026/03/01 19:39:19 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_obj;

	if (!lst || !f || !del)
		return (NULL);
    new_list = NULL;
    while (lst)
    {
		new_obj = ft_lstnew(f(lst->content));
        if (!new_obj)
        {
			ft_lstclear(&new_list, del);
			return (NULL);
        }
		ft_lstadd_back(&new_list, new_obj);
        lst = lst->next;
    }
	return (new_list);
}
