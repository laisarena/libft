/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:18:24 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/30 17:30:30 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_substrnbr(char const *s, char c)
{
	int count;

	if (*s == c)
		count = 0;
	else
		count = 1;
	while (*s)
		if (*s++ == c && *(s + 1) != c && *(s + 1) != '\0')
			count++;
	return (count);
}

int		ft_charindex(char const *s, unsigned int start, char c)
{
	int	i;
	
	i = start;
	while (s[i])
		if (s[i++] == c)
			return (i);
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**strarray;
	char	*temp;
	int		i;
	int		n;
	int		len;

	n = ft_substrnbr(s, c);
	if (!(strarray = malloc(sizeof(char *) * n)))
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (!(temp = ft_strchr(s, c)))
				temp = ft_strchr(s, '\0');
		len = temp - s;
		if (len > 0)
		{
			if (!(strarray[i] = malloc(sizeof(char) * (len + 1))))
				return (NULL);
			ft_strlcpy(strarray[i], s, len + 1);
			i++;
		}
		if (i != n)
			s = (char const*)temp + 1;
	}
	return (strarray);
}
