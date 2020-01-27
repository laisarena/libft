/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:21:44 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/27 15:25:39 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*ptrsrc;
	size_t		dstlen;
	size_t		i;

	ptrsrc = src;
	dstlen = ft_strlen(dst);
	if (dstsize == 0 || dstlen > dstsize)
		return (dstsize + ft_strlen(src));
	while (*dst++)
		;
	i = dstsize;
	while (i-- > 1)
		*dst++ = *ptrsrc++;
	*dst = '\0';
	return (dstsize + ft_strlen(src));
}
