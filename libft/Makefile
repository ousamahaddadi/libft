# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohaddadi <ousama.haddadi@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 11:03:30 by ohaddadi          #+#    #+#              #
#    Updated: 2022/11/05 15:32:50 by ohaddadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_isalpha.c								\
		ft_isdigit.c							\
		ft_isalnum.c 							\
		ft_isascii.c							\
		ft_isprint.c							\
		ft_toupper.c							\
		ft_tolower.c							\
		ft_strlen.c								\
		ft_strlcpy.c							\
		ft_memset.c 							\
		ft_bzero.c								\
		ft_memcpy.c								\
		ft_memmove.c							\
		ft_strchr.c								\
		ft_strrchr.c								\

NAME = libft.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

OBJSB = $(SRCSB:.c=.o)
OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

CC = clang

CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)
	@echo "Libft Done !"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
