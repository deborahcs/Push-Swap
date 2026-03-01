/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:50:47 by decabral          #+#    #+#             */
/*   Updated: 2025/11/04 15:57:41 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Returns a new str with limits by start and len */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length;
	char	*new;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_calloc(1, 1));
	if (len_s - start < len)
		length = len_s - start;
	else
		length = len;
	new = ((char *)malloc(length + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, length + 1);
	return (new);
}
