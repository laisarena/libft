/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:25:11 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/23 17:27:14 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*ptrsrc;
	char		*ptrdst;

	ptrsrc = src;
	ptrdst = dst;
	while (n--)
		*ptrdst++ = *ptrsrc++;
	return (dst);
}
