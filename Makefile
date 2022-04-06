# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mraspors <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 21:09:40 by mraspors          #+#    #+#              #
#    Updated: 2022/02/08 18:44:13 by mraspors         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

OBJS = ${SRCS:.c=.o}

RM		= rm -f

GCCF = gcc -Wall -Wextra -Werror

LIB = ar -rcs

SRCS = ft_print_char.c ft_print_hex.c ft_print_number.c ft_print_pointer.c ft_print_string.c ft_print_uint.c ft_printf.c

all:	${NAME}

$(NAME): ${OBJS}
		${LIB} ${NAME} ${OBJS}

%.o : %.c ft_printf.h
	${GCCF} -c $< -o $@

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all