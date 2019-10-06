# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/02 11:21:58 by bshi              #+#    #+#              #
#    Updated: 2019/10/02 11:22:37 by bshi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#
# Makefile is a file to describe the way construct a project
# in order to realise automatic compliation and construcion
#
# The command "make" will analyse and execute Makefile
# We can use "make -f filename" to designate the file to analyse,
# in default, it is called "Makefile".
#
# A makefile will contain targets, commands and variables
# target is the file that we want to create
# command is the steps to execute to make the target
#
# When we execute "make filename", this program will examinate whether 
# "filename" exists, and it will execute the corresponding commands
# to make it if it doesn't exist
#
# The items after the colon of target is called "dependency"
# each item should be a target in this makefile or an existing file
# in order to construct current target, we need to construct
# all the dependencies firstly
# Attention: if the modification time of a dependency is later than the
# creation time of corresponding target, makefile will re-create the target
#
# Makefile is not a script and has no the executing order
# we should treat it as a general principle sets
#
# We cannot define serveral commands for a same "target"
# if it occurs, the program will execute the last commands
#
# a command start with "tab"
#
# according to the description of target, we will realise that 
# we don't have to create a file by using target, we can also
# define some "target" to execute somethings, ex, clean
# if the file with same name exists, we can use ".PHONY" to differenciate them
#
# "$<": the first dependency
# "$^": all dependencies
# "$@": target

NAME = libft.a

SRC = ft_memcpy.c \
	  ft_bzero.c

HEADER = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

OBJ = ${SRC:%.c=%.o}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}
	ranlib ${NAME}

all: ${NAME}

${OBJ}:
	${CC} ${CFLAGS} -I ${HEADER} -c ${SRC}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean fclean all re
