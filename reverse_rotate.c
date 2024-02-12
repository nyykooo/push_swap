/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:32:20 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/12 18:05:37 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list *new_first;

    if (!(*stack) || (*stack)->next == NULL)
    {
        return ;
    }
	new_first = ft_lstlast(*stack);
	new_first->prev->next = NULL;
	new_first->prev = NULL;
	new_first->next = (*stack);
	*stack = new_first;
    
}

void    rra(t_list **stack_a)
{
    reverse_rotate(stack_a);
    write(1, "rra\n", 4);
}

void    rrb(t_list **stack_b)
{
    reverse_rotate(stack_b);
    write(1, "rrb\n", 4);
}

void    rrr(t_list **stack_a, t_list **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    write(1, "rrr\n", 4);
}
