/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:30:17 by decabral          #+#    #+#             */
/*   Updated: 2025/11/07 08:54:11 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Searches for the first occurence of c respecting limit */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*array;

	i = 0;
	array = ((unsigned char *)s);
	while (i < n)
	{
		if (array[i] == ((unsigned char)c))
			return ((void *)&array[i]);
		i++;
	}
	return (NULL);
}
