/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:27:38 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/28 17:43:25 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	temp[len];

	if (!dst && !src)
		return (NULL);
	ft_memcpy(temp, src, len);
	ft_memcpy(dst, temp, len);
	return (dst);
}
