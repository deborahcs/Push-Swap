/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:09:56 by decabral          #+#    #+#             */
/*   Updated: 2025/11/03 17:10:45 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* It copies the str to a new str */
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new;	

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	new = ((char *) malloc(len + 1));
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s, len + 1);
	return (new);
}
