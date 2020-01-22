/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:18:24 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/22 13:33:50 by lfrasson         ###   ########.fr       */
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
	return(i);
}

char	**ft_split(char const *s, char c)
{
	char	**strarray;
	char	*substr;
	int		i;
	int		j;
	int		start;
	int		strlen;

	strarray = NULL;
	if (!(strarray = malloc(sizeof(char *) * ft_substrnbr(s, c))))
		return (NULL);
	start = 0;
	i = 0;
	while(strarray[i])
	{
		ft_putnbr_fd(start, 1);
		ft_putnbr_fd(ft_charindex(s, start, c), 1);
		substr = ft_substr(s, start, ft_charindex(s, start, c) - start);
		ft_putendl_fd(substr, 1);
		strlen = ft_strlen(substr);
		if (!(strarray[i] = malloc(sizeof(char) * strlen)))
			return (NULL);
		j = 0;
		while (substr[j])
		{
			strarray[i][j] = substr[j];
			j++;
		}
		ft_putendl_fd(strarray[i], 1);
		start = start + strlen + 1;
		i++;
	}
	return (strarray);
}
