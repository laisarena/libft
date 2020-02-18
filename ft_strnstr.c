/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:29:11 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/29 13:50:21 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t nlen;

	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	while (len-- && *haystack)
	{
		if (*haystack == *needle && len >= nlen)
			if (ft_strncmp(haystack, needle, nlen) == 0)
				return ((char *)haystack);
		haystack++;
	}
	return (0);
}
