/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:55:40 by ncampbel          #+#    #+#             */
/*   Updated: 2024/04/06 11:42:50 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	index_stack(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

t_list	*get_next_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	bool	first_run;

	head = *stack;
	first_run = true;
	min = NULL;
	while (head)
	{
		if ((head->index == -1) && (first_run || head->content < min->content))
		{
			min = head;
			first_run = false;
		}
		head = head->next;
	}
	return (min);
}
