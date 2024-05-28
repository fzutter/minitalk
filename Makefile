# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fzutter <fzutter@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 10:10:52 by fzutter           #+#    #+#              #
#    Updated: 2024/05/28 15:05:09 by fzutter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = client.c server.c

OBJ = $(SRC:.c=.o)

NAME = minitalk

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ) minitalk
	ar rcs $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re