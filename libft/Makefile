# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/02 11:21:58 by bshi              #+#    #+#              #
#    Updated: 2019/10/10 13:50:20 by bshi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# "$<": the first dependency
# "$^": all dependencies
# "$@": target

.PHONY: re, clean, fclean, all, bonus

NAME= libft.a

BONUS= bonus.a

SRC_FILE=	ft_atoi.c\
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

SRC_BONUS=	ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\

OBJ=$(SRC_FILE:.c=.o)

OBJ_BONUS= $(SRC_BONUS:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c
	@gcc -c -Wall -Werror -Wextra $< -o $@

bonus: $(OBJ_BONUS)
	@ar rc $(BONUS) $(OBJ_BONUS)
	@ranlib $(BONUS)

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)
fclean: clean
	@rm -f $(NAME) $(BONUS)
re: fclean all
