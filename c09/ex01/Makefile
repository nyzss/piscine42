# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 15:55:09 by okoca             #+#    #+#              #
#    Updated: 2024/02/28 07:17:56 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = ./includes/

CFILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

SRC = ./srcs/

SRCS = ${addprefix ${SRC}, ${CFILES}}

NAME = libft.a

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o ${<:.c=.o}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
