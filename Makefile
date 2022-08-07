# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avitolin <@students.42wolfsburg.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 02:21:46 by avitolin          #+#    #+#              #
#    Updated: 2022/08/04 23:03:39 by avitolin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_c_02

FLAGS = -Wall -Werror -Wextra 

FILES = ../c_00/ex00/ft_putchar.c \
../c_00/ex07/ft_putnbr.c \
../c_01/ex05/ft_putstr.c \
../c_01/ex06/ft_strlen.c \
ex_00/ft_strcpy.c \
ex_01/ft_strncpy.c \
ex_02/ft_str_is_alpha.c \
ex_03/ft_str_is_numeric.c \
ex_04/ft_str_is_lowercase.c \
ex_05/ft_str_is_uppercase.c \
ex_06/ft_str_is_printable.c \
ex_07/ft_strupcase.c \
ex_08/ft_strlowcase.c \
ex_09/ft_strcapitalize.c \
c_02_main.c

all: $(NAME)

$(NAME): $(FILES)
	gcc $(FLAGS) $(FILES) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader */ft_*.c *.h