/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:27:38 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/24 14:20:48 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ptrdst;
	const char	*ptrsrc;

	ptrdst = dst;
	ptrsrc = src;
	while (len-- && *ptrdst && *ptrsrc)
		*ptrdst++ = *ptrsrc++;
	return (dst);
}
