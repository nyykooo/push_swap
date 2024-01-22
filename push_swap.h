/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:17:14 by ncampbel          #+#    #+#             */
/*   Updated: 2024/01/20 17:56:38 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct s_list
{
	long	content;
	int		index;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

// ANALYZING ARGUMENTS
int	ft_analyze_av(char *av);
int	*ft_push_av(char *av);

// CREATING STACK
void	ft_add_av(char *av, t_list **stack);
void	lst_add(t_list **lst, long number);
void	lst_add_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);

// STANDARD FUNCTIONS
long	ft_atol(char *nbr);
int	ft_issign(char sign);
int	ft_isnumber(char nbr);

// ERROR/FREE
void	ft_freelst(t_list **lst);

#endif