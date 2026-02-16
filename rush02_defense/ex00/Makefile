# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almolina <almolina@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 16:08:55 by almolina          #+#    #+#              #
#    Updated: 2026/02/08 23:23:58 by almolina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := rush-02

CC := cc
CFLAGS := -Wall -Wextra -Werror

SRCS := main.c utils_dict.c utils.c dict_functions.c print_results.c 

OBJS := $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) -o $(OBJS)

%.o: %.c rush02lib.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)
	rm -f *.gch

re: fclean all

.PHONY : all clean fclean re

