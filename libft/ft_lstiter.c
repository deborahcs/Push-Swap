/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:33:11 by decabral          #+#    #+#             */
/*   Updated: 2026/03/01 19:35:18 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void(*f)(void*))
{
	t_list *tmp;
    
	tmp = lst;
	while (tmp)
	{
        f(tmp->content);
        tmp = tmp->next;
	}
}
