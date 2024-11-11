# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralipran <ralipran@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 14:04:12 by ralipran          #+#    #+#              #
#    Updated: 2024/11/11 11:54:40 by ralipran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_printf.c putchar.c putnbr.c putptr.c putstr.c write.c

OBJS = ${SRCS:.c=.o}

CC			=	cc
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror
AR			=	ar rcs

NAME		=	libftprintf.a

all:$(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:			clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all bonus clean fclean re
.SILENT:
