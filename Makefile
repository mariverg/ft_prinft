# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mariverg <mariverg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 13:44:36 by mariverg          #+#    #+#              #
#    Updated: 2024/01/29 13:56:46 by mariverg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libftprintf.a
SRCS 	= 	ft_printf.c\
			ft_putchar.c\
			ft_putstr.c\


CC		= 	gcc
FLAGS 	= 	-Wall -Werror -Wextra
INCLUDE =   libftprintf.h

OBJS 	= 	${SRCS:.c=.o}

all: ${NAME}


${NAME}: ${OBJS}
	ar rcs $(NAME) $(OBJS) $(INCLUDE)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f ${OBJS} 

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re 