# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmustone <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 13:07:00 by vmustone          #+#    #+#              #
#    Updated: 2022/07/16 13:17:25 by vmustone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

FLAGS = -Wall -Werror -Wextra

SRC = rush02.c ft_putstr.c ft_putnbr.c ft_putchar.c split_string.c ft_calc_line_amount.c ft_calc_first_line.c check_rush00.c check_rush01.c check_rush02.c check_rush03.c check_rush04.c

INCLUDE = rush_02.h

all:
	gcc $(FLAGS) -o $(NAME) $(SRC) -I $(INCLUDE)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
