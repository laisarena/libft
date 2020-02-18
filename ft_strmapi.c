/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:02:24 by lfrasson          #+#    #+#             */
/*   Updated: 2020/02/18 14:23:15 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (!(str = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	i = 0;
	while (*s)
		*str++ = f(i++, *s++);
	*str = '\0';
	return (str - i);
}
