/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:54:01 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/06 18:34:16 by ncampbel         ###   ########.fr       */
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
void	ft_freemega(char **str);
void	ft_freelst(t_list **lst);

// ANALYZE ARGUMENTS FUNCTIONS
int	ft_analyze_av(char *av);
long ft_atol(const char *nbr);
int	arg_len(char **av);


// HANDLE ARGUMENTS FUNCTIONS
void	handle_2_args(char **av, t_list **stack_a);
void	handle_many_args(int ac, char **av, t_list **stack_a);

// ADD ARGUMENTS FUNCTIONS
void	ft_add_av(char *av, t_list **stack);

// LIST FUNCTIONS
void	lst_add(t_list **lst, long number);
t_list	*ft_lstlast(t_list *lst);
void	lst_add_back(t_list **lst, t_list *new);
t_list	*find_bigger(t_list *list);
int	ft_lstsize(t_list *lst);

// PRINT FUNCTIONS
void	ft_print_list(t_list *stack);

// SORT FUNCTIONS
void	sort_list(t_list **list);
void	sort_3(t_list **list);

// SUBJECT FUNCTIONS
void	reverse_rotate(t_list **stack);
void	rotate(t_list **stack);
void	swap(t_list **stack);

#endif
