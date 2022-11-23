# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmustone <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 11:48:42 by vmustone          #+#    #+#              #
#    Updated: 2022/07/14 17:56:20 by vmustone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_display_file

FLAGS = -Wall -Werror -Wextra

SRC = ft_putstr.c ft_putchar.c ft_display_file.c

all:
	gcc $(FLAGS) -o $(NAME) $(SRC)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
