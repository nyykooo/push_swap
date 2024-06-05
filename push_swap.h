/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:54:01 by ncampbel          #+#    #+#             */
/*   Updated: 2024/04/06 14:22:39 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include <limits.h>

// ERROR/FREE FUCTIONS
void	ft_error(t_list **stack, char **array);
int		free_array(char **av);
void	ft_freelst(t_list **lst);

// ANALYZE ARGUMENTS FUNCTIONS
int		ft_analyze_av(char *av);
int		ft_only_spaces(char *av);
int		arg_len(char **av);
bool	is_dup(t_list **list);

// HANDLE ARGUMENTS FUNCTIONS
void	handle_args(int ac, char **av, t_list **stack_a);

// ADD ARGUMENTS FUNCTIONS
void	ft_add_av(char *av, t_list **stack, char **args);

// LIST FUNCTIONS
void	lst_add(t_list **lst, long number);
t_list	*ft_lstlast(t_list *lst);
void	lst_add_back(t_list **lst, t_list *new);
t_list	*find_bigger_or_smaller(t_list *list, int difference);
int		ft_lstsize(t_list *lst);
void	index_stack(t_list **stack);
t_list	*get_next_min(t_list **stack);

// SORT FUNCTIONS
void	sort_list(t_list **list);
void	sort_3(t_list **list);
void	sort_4(t_list **list_a, t_list **list_b);
void	sort_5(t_list **list_a, t_list **list_b);
bool	is_sorted(t_list *stack);
void	radix_sort(t_list **stack_a, t_list **stack_b);

// SUBJECT FUNCTIONS
void	reverse_rotate(t_list **stack);
void	rotate(t_list **stack);
void	swap(t_list **stack);
void	push(t_list **origin_stack, t_list **destiny_stack);

// DISTRIBUTION FUNCTIONS
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

#endif
