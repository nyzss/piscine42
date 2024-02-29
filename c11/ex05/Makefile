# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 15:55:09 by okoca             #+#    #+#              #
#    Updated: 2024/02/28 19:27:20 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = ./includes/

FILES = do-op.c atoi.c putnbr.c utils.c operations.c

SRC = ./src/

SRCS = ${addprefix ${SRC}, ${FILES}}

NAME = do-op

OBJS = ${SRCS:.c=.o} 

.c.o:
	${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -I ${INCLUDES} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all 

.PHONY: all clean fclean re
