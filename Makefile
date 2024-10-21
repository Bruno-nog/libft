# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 12:42:16 by brunogue          #+#    #+#              #
#    Updated: 2024/10/20 15:22:53 by brunogue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        =    libft.a

CC            =    cc

CFLAGS        =    -Wall -Werror -Wextra

SRCS        = ft_bzero.c ft_memcpy.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memmove.c

HEADER        =    libft.h

AR            =    ar rcs

RM            =    rm -rf

OBJS        =    ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean:    clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re