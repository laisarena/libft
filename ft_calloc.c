/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 14:12:53 by lfrasson          #+#    #+#             */
/*   Updated: 2021/05/03 02:48:31 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function allocates a block of memory for an array of num elements,
** each of them size bytes long, and initializes all its bits to zero.
** Parameters:
**	count - Number of elements to allocate.
**	size - Size of each element.
** Return Value
**	On success, a pointer to the memory block allocated by the function.
** 	If the function failed to allocate the requested block of memory or,
**	if size is zero, a null pointer is returned.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
