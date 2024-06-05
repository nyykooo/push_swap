# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 09:59:57 by ncampbel          #+#    #+#              #
#    Updated: 2024/04/06 11:47:28 by ncampbel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap.a
CC= cc
CFLAGS= -Wall -Wextra -Werror -g
SRC= push_swap.c \
		src/analyze_arguments.c \
		src/ft_add_av.c \
		src/ft_free_error.c \
		src/handle_arguments.c \
		src/list_functions.c \
		src/sort_list.c \
		src/dup_sorted.c \
		src/radix_sort.c \
		src/index.c \
		moves/push.c \
		moves/rotate.c \
		moves/reverse_rotate.c \
		moves/swap.c
OBJ= $(SRC:.c=.o)
EXEC= push_swap
LIBFT= libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	ar -crs $(NAME) $(OBJ)
	$(CC) $(CFLAGS) $(NAME) $(LIBFT) -o $(EXEC)

$(LIBFT):
	make -C libft

clean:
	rm -f $(OBJ)
	cd libft && make clean

fclean: clean
	rm -f $(NAME) $(EXEC)
	cd libft && make fclean

re: fclean all

.PHONY: all clean fclean re
