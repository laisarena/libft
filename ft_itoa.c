/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:19:15 by lfrasson          #+#    #+#             */
/*   Updated: 2020/02/18 12:20:28 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(long l, int sign)
{
	int	count;

	count = 1;
	if (sign == -1)
		count++;
	while (l >= 10)
	{
		l = l / 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	long	l;
	int		digits;
	int		sign;
	char	*str;

	sign = 1;
	l = n;
	if (l < 0)
		sign = -1;
	l = sign * l;
	digits = ft_countdigits(l, sign);
	if (!(str = calloc(digits, sizeof(char))))
		return (NULL);
	while (digits > 0)
	{
		if (digits == 1 && sign == -1)
			str[0] = '-';
		else
			str[digits - 1] = l % 10 + '0';
		l = l / 10;
		digits--;
	}
	return (str);
}
