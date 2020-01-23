/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:24:29 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/23 14:28:42 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	nc;

	ptr = b;
	nc = (unsigned char)c;
	while (len > 0)
	{
		*ptr = nc;
		ptr++;
		len--;
	}
	return (b);
}
