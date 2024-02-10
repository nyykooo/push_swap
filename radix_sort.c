/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:30:39 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/10 18:42:09 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int	get_max_bits(t_list **stack)
// {
// 	t_list	*head;
// 	int		max;
// 	int		max_bits;

// 	head = *stack;
// 	max = head->index;
// 	max_bits = 0;
// 	while (head)
// 	{
// 		if (head->index > max)
// 			max = head->index;
// 		head = head->next;
// 	}
// 	while ((max >> max_bits) != 0)
// 		max_bits++;
// 	return (max_bits);
// }

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	bit;
	t_list			*current;

	bit = 0;
	while (bit < 32)
	{
		i = 0;
		current = *stack_a;
		while (i < ft_lstsize(*stack_a))
		{
			if ((1 & (current->index >> bit)) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			current = *stack_a;
			i++;
		}
		current = *stack_b;
		while (*stack_b)
			pa(stack_a, stack_b);
		bit++;
		if (is_sorted(*stack_a))
			return ;
	}
	// t_list	*head_a;
	// int		significant_bit;
	// int		list_position;
	// int		size;
	// int		max_bits;

	// significant_bit = 0;
	// head_a = *stack_a;
	// size = ft_lstsize(head_a);
	// max_bits = get_max_bits(stack_a);
	// while (significant_bit < max_bits)
	// {
	// 	list_position = 0;
	// 	while (list_position++ < size)
	// 	{
	// 		head_a = *stack_a;
	// 		if (((head_a->index >> significant_bit) & 1) == 1)
	// 			ra(stack_a);
	// 		else
	// 			pb(stack_a, stack_b);
	// 	}
	// 	while (ft_lstsize(*stack_b) != 0)
	// 		pa(stack_a, stack_b);
	// 	significant_bit++;
	// }
}
