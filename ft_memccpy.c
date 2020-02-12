/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:07:48 by lfrasson          #+#    #+#             */
/*   Updated: 2020/02/07 17:56:19 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnchr(const char *s, int c, int n)
{
	while (n && *s != (char)c)
		if (*s++ == '\0' || n-- == 1)
			return (0);
	return ((char *)s);
}

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*temp;
	size_t	len;

	if (!(temp = ft_strnchr(src, (unsigned char)c, n)))
	{
		ft_memcpy(dst, src, n);
		return (0);
	}
	len = temp - (char *)src;
	ft_memcpy(dst, src, len + 1);
	return (dst + len + 1);
}
