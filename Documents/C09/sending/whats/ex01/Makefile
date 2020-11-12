# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/12 12:41:59 by jibanez-          #+#    #+#              #
#    Updated: 2020/11/12 12:42:22 by jibanez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c \
		srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

GCC		= gcc
RM		= rm -f *.o

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${GCC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} 

fclean:	clean
		${RM} ${NAME}

re:		fclean all
