/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:18:24 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/22 15:16:47 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_substrnbr(char const *s, char c)
{
	int count;
	int	i;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

int		ft_charindex(char const *s, unsigned int start, char c)
{
	int	i;

	i = start;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**strarray;
	char	*substr;
	int		i;
	int		j;
	int		start;

	strarray = NULL;
	if (!(strarray = malloc(sizeof(char *) * ft_substrnbr(s, c))))
		return (NULL);
	start = 0;
	i = -1;
	while (++i < ft_substrnbr(s, c))
	{
		substr = ft_substr(s, start, ft_charindex(s, start, c) - start);
		if (!(strarray[i] = malloc(sizeof(char) * ft_strlen(substr))))
			return (NULL);
		j = -1;
		while (substr[++j])
			strarray[i][j] = substr[j];
		start = start + j + 1;
	}
	return (strarray);
}
