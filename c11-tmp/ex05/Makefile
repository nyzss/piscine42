# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 15:55:09 by okoca             #+#    #+#              #
#    Updated: 2024/02/28 11:43:19 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = ./includes/

FILES = do-op.c atoi.c putnbr.c utils.c operations.c

SRC = ./src/

SRCS = ${addprefix ${SRC}, ${FILES}}

NAME = do-op

FILES_OUT = ${NAME} 

${FILES_OUT}: ${SRCS}
	${CC} ${CFLAGS} ${SRCS} -I ${INCLUDES} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${FILES_OUT}

fclean: clean
	rm -f ${NAME}

re: fclean ${NAME}

.PHONY: all clean re
