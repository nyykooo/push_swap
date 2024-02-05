/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:54:01 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/05 15:54:42 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"
#include <limits.h>

// ERROR/FREE FUCTIONS
void	ft_free(t_list *stack);
void	ft_error(t_list **stack);

// ANALYZE ARGUMENTS FUNCTIONS
int	ft_analyze_av(char *av);
long ft_atol(const char *nbr);


// HANDLE ARGUMENTS FUNCTIONS
void	handle_2_args(char **av, t_list **stack_a);
void	handle_many_args(int ac, char **av, t_list **stack_a);

// ADD ARGUMENTS FUNCTIONS
void	ft_add_av(char *av, t_list **stack);

// LIST FUNCTIONS
void	lst_add(t_list **lst, long number);
t_list	*ft_lstlast(t_list *lst);
void	lst_add_back(t_list **lst, t_list *new);
void	ft_freelst(t_list **lst);
void	ft_print_list(t_list *stack);

#endif
