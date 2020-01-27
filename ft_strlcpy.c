/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 11:51:56 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/27 12:18:58 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char *ptrsrc;

	ptrsrc = src;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dstsize-- > 1)
		*dst++ = *ptrsrc++;
	*dst = '\0';
	return (ft_strlen(src));
}
