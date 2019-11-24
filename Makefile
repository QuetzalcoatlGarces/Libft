# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davigarc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 22:49:01 by davigarc          #+#    #+#              #
#    Updated: 2019/11/18 23:31:02 by davigarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEAD = libft.h
SRCS = ft*.c
OBJS = *.o

$(NAME):
		@gcc -c -Wall -Wextra -Werror $(SRCS) -I $(HEAD)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)
		@echo "[INFO] Library [$(NAME)] created (objects remaining in directory)"

.PHONY: all, clean, fclean, re

all: $(NAME)

clean:
		@rm -f $(OBJS)
		@echo "[INFO] Objects removed"

fclean: clean
		@rm -f $(NAME)
		@echo "[INFO] Library [$(NAME)] removed"

re: fclean all
