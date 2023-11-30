# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 11:54:51 by sel-jadi          #+#    #+#              #
#    Updated: 2023/11/19 00:57:09 by sel-jadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rc
SRC = 	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_put_d.c \
		ft_put_u.c \
		ft_strlen.c

OBJ = $(SRC:%.c=%.o)
	
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: clean