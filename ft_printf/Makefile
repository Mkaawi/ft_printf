# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdennac <abdennac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 18:19:45 by abdennac          #+#    #+#              #
#    Updated: 2024/02/25 18:23:21 by abdennac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_print_hex.c ft_print_char.c ft_print_int.c ft_print_str.c ft_print_unsighned.c ft_print_ptr.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

%.o : %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME) : $(OBJ)
	ar -rcs $@ $^

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re