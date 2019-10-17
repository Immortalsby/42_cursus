# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/02 11:21:58 by bshi              #+#    #+#              #
#    Updated: 2019/10/17 16:08:27 by bshi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# "$<": the first dependency
# "$^": all dependencies
# "$@": target

.PHONY: re, clean, fclean, all, bonus

NAME= libft.a

CFLAGS = -Wall -Wextra -Werror -I. -c

SRCS=		ft_atoi.c\
			ft_bzero.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_itoa.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putnbr_fd.c\
			ft_putendl_fd.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlen.c\
			ft_strlcpy.c\
			ft_strchr.c\
			ft_split.c\
			ft_strmapi.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_substr.c\
			ft_strtrim.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_calloc.c\

SRCS_B=	ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\

OBJECTS = $(SRCS:%.c=%.o)

OBJECTS_B = $(SRCS_B:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
		ar rcs $(NAME) $(OBJECTS)

$(OBJECTS) : $(SRCS)
		gcc $(CFLAGS) $(SRCS)

$(OBJECTS_B) : $(SRCS_B)
		gcc $(CFLAGS) $(SRCS_B)

bonus : fclean $(OBJECTS) $(OBJECTS_B)
	ar rcs libft.a $(OBJECTS) $(OBJECTS_B)

clean : 
	rm -f $(OBJECTS) $(OBJECTS_B)

fclean : clean
	rm -f $(NAME)

re : fclean all
