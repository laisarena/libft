/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:14:49 by lfrasson          #+#    #+#             */
/*   Updated: 2020/01/21 16:41:30 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t	strlen(const char *s);

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}	
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l = - l;
	}
	if (l >= 10)
		ft_putnbr_fd(l / 10, fd);
	ft_putchar_fd(l % 10 + '0', fd);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	str = malloc(sizeof(char)*len);
	if (!str)
		return(NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	return(str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char 	*str;

	str = malloc((strlen(s1) + strlen(s2) + 1)*sizeof(char));
	if (!str)
		return(NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return(str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		setlen;
	int 	s1len;
	int		i;
	int		start;
	int		end;

	setlen = strlen(set);
	s1len = strlen(s1);
	i = 0;
	start = 0;
	while (s1[i] == set[i] && set[i] )
	{
		if ( i == setlen - 1 )
			start = setlen;
		i++;			
	}
	i = setlen - 1;
	end = 0;
	while ( s1len > setlen && s1[i + s1len - setlen] == set[i])
	{
		if (i == 0)
			end = setlen;
		i--;
	}
	return(ft_substr(s1, start, s1len - start - end));
}
