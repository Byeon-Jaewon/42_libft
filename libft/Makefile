# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbyeon <jbyeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/25 16:11:45 by jbyeon            #+#    #+#              #
#    Updated: 2020/12/31 15:06:16 by jbyeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
	 ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c \
	 ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	 ft_memset.c ft_strrchr.c ft_strchr.c ft_strlcpy.c \
	 ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncmp.c \
	 ft_strnstr.c ft_tolower.c ft_toupper.c ft_calloc.c \
	 ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	 ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c\
	 ft_putendl_fd.c ft_putnbr_fd.c

OBJECTS=ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o \
		ft_isascii.o ft_isdigit.o ft_isprint.o ft_memccpy.o \
		ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o \
		ft_memset.o ft_strrchr.o ft_strchr.o ft_strdup.o \
		ft_strlcpy.o ft_strlcat.o ft_strlen.o ft_strncmp.o \
		ft_strnstr.o ft_tolower.o ft_toupper.o ft_calloc.o \
		ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o \
		ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o \
		ft_putendl_fd.o ft_putnbr_fd.o \

CC = clang

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

so:
	clang -shared -fPIC assets/tmp/ft_atoi.o assets/tmp/ft_bzero.o assets/tmp/ft_calloc.o \
		assets/tmp/ft_isalnum.o assets/tmp/ft_isalpha.o assets/tmp/ft_isascii.o \
		assets/tmp/ft_isdigit.o assets/tmp/ft_isprint.o assets/tmp/ft_memccpy.o \
		assets/tmp/ft_memchr.o assets/tmp/ft_memcmp.o assets/tmp/ft_memcpy.o \
		assets/tmp/ft_memmove.o assets/tmp/ft_memset.o assets/tmp/ft_strchr.o \
		assets/tmp/ft_strdup.o assets/tmp/ft_strlcat.o assets/tmp/ft_strlcpy.o \
		assets/tmp/ft_strlen.o assets/tmp/ft_strncmp.o assets/tmp/ft_strnstr.o \
		assets/tmp/ft_tolower.o assets/tmp/ft_toupper.o -o libft.so 
	gcc -shared -o libft.so $(OBJECTS)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
