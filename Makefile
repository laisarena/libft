#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfrasson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/28 12:16:07 by lfrasson          #+#    #+#              #
#    Updated: 2021/05/19 18:45:38 by lfrasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c\
	   ft_bzero.c\
	   ft_calloc.c\
	   ft_isalnum.c\
	   ft_isalpha.c\
	   ft_isascii.c\
	   ft_isdigit.c\
	   ft_isprint.c\
	   ft_isspace.c\
	   ft_itoa.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_memcpy.c\
	   ft_memccpy.c\
	   ft_memmove.c\
	   ft_memset.c\
	   ft_putchar_fd.c\
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c\
	   ft_putstr_fd.c\
	   ft_putsubstr_fd.c\
	   ft_split.c\
	   ft_strdup.c\
	   ft_strchr.c\
	   ft_strjoin.c\
	   ft_strlcat.c\
	   ft_strlcpy.c\
	   ft_strlen.c\
	   ft_strmapi.c\
	   ft_strncmp.c\
	   ft_strnstr.c\
	   ft_strrchr.c\
	   ft_strtrim.c\
	   ft_substr.c\
	   ft_tolower.c\
	   ft_toupper.c\

SRCS_BONUS = ft_lstnew.c\
			 ft_lstadd_front.c\
			 ft_lstsize.c\
			 ft_lstlast.c\
			 ft_lstadd_back.c\
			 ft_lstdelone.c\
			 ft_lstclear.c\
			 ft_lstiter.c\
			 ft_lstmap.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

OBJS_PATH = ./objs/

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $(OBJS_PATH)$@

$(NAME): dir $(OBJS)
		ar rc $(NAME) $(addprefix $(OBJS_PATH),$(OBJS))
		ranlib $(NAME)

bonus:	$(NAME) $(OBJS_BONUS)
		ar rc $(NAME) $(addprefix $(OBJS_PATH),$(OBJS_BONUS))
		ranlib $(NAME)

dir:
		mkdir -p $(OBJS_PATH)

all:	$(NAME)

clean:
		rm -rf $(OBJS_PATH)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re bonus
