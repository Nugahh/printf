# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwong <fwong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 15:53:23 by fwong             #+#    #+#              #
#    Updated: 2022/06/04 21:13:29 by fwong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= 

OBJS	= ${SRCS:.c=.o}

BONUS = 

Bonus_OBJS = ${BONUS:.c=.o}

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus:	${Bonus_OBJS}
	ar rcs ${NAME} ${Bonus_OBJS}

clean:
	rm -f ${OBJS} ${Bonus_OBJS}

fclean: clean
	rm -f ${NAME}

re:		fclean all

.PHONY: all clean fclean re

