/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:48:08 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/10 18:40:53 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	push(t_list **origin_stack, t_list **destiny_stack)
// {
//     t_list *temp;

//     if (!(*origin_stack))
//         return ;
//     temp = *origin_stack;
//     *origin_stack = (*origin_stack)->next;
//     temp->next = *destiny_stack;
//     *destiny_stack = temp;
// }

// void    pa(t_list **stack_a, t_list **stack_b)
// {
//     push(stack_b, stack_a);
//     write(1, "pa\n", 3);
// }

// void    pb(t_list **stack_a, t_list **stack_b)
// {
//     push(stack_a, stack_b);
//     write(1, "pb\n", 3);
// }

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*top_a;

	if (stack_a == NULL)
		return ;
	top_a = *stack_a;
	*stack_a = top_a->next;
	top_a->next = *stack_b;
	*stack_b = top_a;
	printf("pb\n");
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*top_b;

	if (stack_b == NULL)
		return ;
	top_b = *stack_b;
	*stack_b = top_b->next;
	top_b->next = *stack_a;
	*stack_a = top_b;
	printf("pa\n");
}
