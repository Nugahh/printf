# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwong <fwong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 15:53:23 by fwong             #+#    #+#              #
#    Updated: 2022/06/07 21:31:40 by fwong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= src/ft_hexa_maj.c src/ft_hexa_min.c src/ft_integer.c src/ft_pointer.c\
		src/ft_putchar.c src/ft_putstr.c src/ft_unsignedint.c src/ft_printf.c\
		src/ft_percent.c src/main.c

OBJS	= ${SRCS:.c=.o}

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	make -C libft
	
	cp libft/libft.a .

	mv libft.a ${NAME}
	
	ar rcs ${NAME} ${OBJS}

bonus:	${Bonus_OBJS}
	ar rcs ${NAME} ${Bonus_OBJS}

clean:
	rm -f ${OBJS} ${Bonus_OBJS}

fclean: clean
	rm -f ${NAME}

test: ${OBJS}
	make -C libft
	
	cp libft/libft.a .

	mv libft.a ${NAME}
	
	gcc ${NAME} ${OBJS} libftprintf.a

re:		fclean all

.PHONY: all clean fclean re

