# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pansquer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/06 09:45:02 by pansquer          #+#    #+#              #
#    Updated: 2021/05/07 15:19:05 by pansquer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_bzero.c   ft_isdigit.c ft_memcmp.c  ft_strchr.c  ft_strlen.c  ft_toupper.c ft_isalnum.c ft_isprint.c ft_memcpy.c  ft_strdup.c ft_strncmp.c ft_isalpha.c ft_memccpy.c ft_memmove.c ft_strlcat.c ft_strrchr.c ft_isascii.c ft_memchr.c  ft_memset.c  ft_strlcpy.c ft_tolower.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

B_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

CC = gcc

CFLAG = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

B_OBJS = ${B_SRCS:.c=.o}

RM = rm -rf

AR = ar

ARFLAG = rc

RAN = ranlib

.c.o:
	${CC} ${CFLAG} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${AR} ${ARFLAG} ${NAME} ${OBJS}
		${RAN} ${NAME}

all : ${NAME}

bonus: ${OBJS} ${B_OBJS}
		ar -rcs ${NAME} $^

clean : 
	${RM} ${OBJS} ${B_OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all bonus clean fclean re
