/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:25:11 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/28 17:41:27 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptrsrc;
	unsigned char	*ptrdst;

	ptrsrc = (unsigned char *)src;
	ptrdst = (unsigned char *)dst;
	if (!ptrsrc && !ptrdst)
		return (NULL);
	while (n--)
		*ptrdst++ = *ptrsrc++;
	return (dst);
}
