/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:02:12 by decabral          #+#    #+#             */
/*   Updated: 2025/11/13 14:02:14 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_digits(int n)
{
	long	num;
	int		len;

	len = 0;
	num = (long)n;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static long	is_negative(int n, char *str)
{
	long	num;

	num = (long)n;
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	int		i;
	int		len;

	num = (long)n;
	len = len_digits(n);
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	num = is_negative(n, str);
	i = len - 1;
	while (num > 0)
	{
		str[i] = (num % 10 + '0');
		num = num / 10;
		i--;
	}
	return (str);
}
