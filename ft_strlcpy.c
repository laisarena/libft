/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 11:51:56 by lfrasson          #+#    #+#             */
/*   Updated: 2021/05/03 02:35:35 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if (!dst)
		return (0);
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (*src && dstsize-- > 1)
		*dst++ = (char)*src++;
	*dst = '\0';
	return (len);
}
