# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 17:50:35 by ytouab            #+#    #+#              #
#    Updated: 2022/07/07 14:41:14 by ytouab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

OBJS = ${SRCS:.c=.o}


RM		= rm -f

GCCF = gcc -Wall -Wextra -Werror

LIB = ar -rcs

SRCS =	ft_printf.c\
		ft_putchar_fd.c\
		ft_putchar.c\
		ft_puthex.c\
		ft_putnbr_fd.c\
		ft_putunbr_fd.c\
		ft_putstr_fd.c\
		ft_strlen.c\
		ft_putptr.c\

.c.o:
		${GCCF} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		${LIB} ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
