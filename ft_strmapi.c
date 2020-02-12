/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:02:24 by lfrasson          #+#    #+#             */
/*   Updated: 2020/02/07 18:12:53 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*ptr;

	str = malloc(sizeof(char) * ft_strlen(s));
	ptr = str;
	while (*s)
		*str++ = (*f)(1 , *s++);
	return (ptr);
}
