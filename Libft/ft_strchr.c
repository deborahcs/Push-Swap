/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:17:17 by decabral          #+#    #+#             */
/*   Updated: 2025/11/17 15:18:20 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Returns the pointer of the first time that char occured */
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	pointer;

	i = 0;
	pointer = ((char)c);
	while (s[i])
	{
		if (s[i] == pointer)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == pointer)
		return ((char *)&s[i]);
	return (NULL);
}
