/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:18:24 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/31 15:57:49 by lfrasson         ###   ########.fr       */
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
	//ft_putnbr_fd(count, 1);
	//ft_putchar_fd('\n', 1);
	while (*s)
	{
		//ft_putnbr_fd(count, 1);
		//ft_putchar_fd('\n', 1);
		if (*s++ == c && (*(s + 1) != c || *(s + 1) != '\0'))
			count++;
		//ft_putnbr_fd(count, 1);
		//ft_putchar_fd('\n', 1);
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strarray;
	char	*temp;
	int		i;
	int		n;
	int		len;

	n = ft_substrnbr(s, c);

	//ft_putnbr_fd(n, 1);
	if (!(strarray = malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	i = 0;
	while (i < n && n != 0)
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
	strarray[i] = NULL;
	return (strarray);
}
