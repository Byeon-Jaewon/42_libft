# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/25 16:11:45 by jbyeon            #+#    #+#              #
#    Updated: 2020/12/25 16:21:08 by jbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_atoi.c ft_bzero.c ft_isalnum.c \
	 ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	 ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	 ft_memmove.c ft_memset.c \
	 ft_strchr.c ft_strlcpy.c ft_strdup.c \
	 ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
	 ft_tolower.c ft_toupper.c ft_calloc.c \

OBJECTS=ft_atoi.o ft_bzero.o ft_isalnum.o \
		ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
		ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
		ft_memmove.o ft_memset.o \
		ft_strchr.o ft_strdup.o ft_strlcpy.o \
		ft_strlcat.o ft_strlen.o ft_strncmp.o \
		ft_strnstr.o \
		ft_tolower.o ft_toupper.o ft_calloc.o

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
