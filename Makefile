# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/28 12:16:07 by lfrasson          #+#    #+#              #
#    Updated: 2020/01/28 13:25:41 by lfrasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlcpy.c\
	   ft_strlen.c\
	   ft_strmapi.c\
	   ft_bzero.c\
	   ft_strncmp.c\
	   ft_strnstr.c\
	   ft_isalpha.c\
	   ft_strrchr.c\
	   ft_itoa.c\
	   ft_strtrim.c\
	   ft_memchr.c\
	   ft_substr.c\
	   ft_memcmp.c\
	   ft_tolower.c\
	   ft_memcpy.c\
	   ft_toupper.c\
	   ft_memmove.c\
	   ft_memset.c\
	   ft_putchar_fd.c\
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c\
	   ft_putstr_fd.c\
	   ft_split.c\
	   ft_strchr.c\
	   ft_strjoin.c\
	   ft_strlcat.c

OBJS = ${SRCS:.c=.o}

.c.o:
	cc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

all:	${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
