/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:16:47 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/22 11:17:42 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		setlen;
	int		s1len;
	int		i;
	int		start;
	int		end;

	setlen = strlen(set);
	s1len = strlen(s1);
	i = 0;
	start = 0;
	while (s1[i] == set[i] && set[i])
	{
		if (i == setlen - 1)
			start = setlen;
		i++;
	}
	i = setlen - 1;
	end = 0;
	while (s1len > setlen && s1[i + s1len - setlen] == set[i])
	{
		if (i == 0)
			end = setlen;
		i--;
	}
	return (ft_substr(s1, start, s1len - start - end));
}
