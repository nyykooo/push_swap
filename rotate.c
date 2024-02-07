/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:30:52 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/07 18:31:13 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	rotate(t_list **stack)
{
	t_list *tempStack;
	t_list *toLast;

	if (!(*stack) || (*stack)->next == NULL)
		return ;
	toLast = *stack;
	tempStack = ft_lstlast(*stack);
	(*stack) = (*stack)->next;
	toLast->next = NULL;
	tempStack->next = toLast;
}

void    ra(t_list **stack_a)
{
    rotate(stack_a);
    write(1, "ra\n", 3);
}

void    rb(t_list **stack_b)
{
    rotate(stack_b);
    write(1, "rb\n", 3);
}

void    rr(t_list **stack_a, t_list **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    write(1, "rr\n", 3);
}