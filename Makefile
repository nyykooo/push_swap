# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 09:59:57 by ncampbel          #+#    #+#              #
#    Updated: 2024/02/06 18:19:05 by ncampbel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap.a
CC= cc
CFLAGS= -Wall -Wextra -Werror
SRC= push_swap.c list_functions.c handle_arguments.c ft_print_list.c \
    ft_free_error.c ft_add_av.c ft_atol.c analyze_arguments.c sort_list.c \
	subject_functions.c
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