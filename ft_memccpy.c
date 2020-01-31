/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:07:48 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/31 14:07:40 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*temp;
	size_t	len;

	if (!(temp = ft_strchr(src, (unsigned char)c)))
	{
		ft_memcpy(dst, src, n);
		return (0);
	}
	else
	{
		len = temp - (char *)src;
		ft_memcpy(dst, src, len + 1);
		return (dst + len);
	}
}
