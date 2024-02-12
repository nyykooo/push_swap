# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 09:59:57 by ncampbel          #+#    #+#              #
#    Updated: 2024/02/12 16:53:12 by ncampbel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap.a
CC= cc
CFLAGS= -Wall -Wextra -Werror -g
SRC= push_swap.c analyze_arguments.c ft_add_av.c ft_atol.c ft_free_error.c \
     ft_print_list.c handle_arguments.c list_functions.c push.c rotate.c \
	 reverse_rotate.c swap.c sort_list.c dup_sorted.c radix_sort.c
OBJ= $(SRC:.c=.o)
EXEC= push_swap
LIBFT= libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)
	cd libft && make
	$(CC) $(CFLAGS) $(NAME) $(LIBFT) -o $(EXEC)

clean:
	rm -f $(OBJ)
	cd libft && make clean

fclean: clean
	rm -f $(NAME) $(EXEC)
	cd libft && make fclean

re: fclean all

.PHONY: all clean fclean re