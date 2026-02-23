/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:49:18 by decabral          #+#    #+#             */
/*   Updated: 2025/11/17 15:37:13 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Returns the pointer of the last time that char occured */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	pointer;

	i = ft_strlen(s);
	pointer = ((char )c);
	while (i >= 0)
	{
		if (s[i] == pointer)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
