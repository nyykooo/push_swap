/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:48:03 by ncampbel          #+#    #+#             */
/*   Updated: 2024/04/06 11:42:50 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_list(t_list **list)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (is_sorted(*list) == true)
		return ;
	else if (ft_lstsize(*list) == 2 && !is_sorted(*list))
		sa(list);
	else if (ft_lstsize(*list) == 3)
		sort_3(list);
	else if (ft_lstsize(*list) == 4)
		sort_4(list, &stack_b);
	else if (ft_lstsize(*list) == 5)
		sort_5(list, &stack_b);
	else
	{
		index_stack(list);
		radix_sort(list, &stack_b);
		if (stack_b)
			ft_freelst(&stack_b);
		return ;
	}
}

void	sort_3(t_list **list)
{
	t_list	*bigger;

	bigger = find_bigger_or_smaller(*list, 1);
	if (bigger == *list)
		ra(list);
	else if (bigger == (*list)->next)
		rra(list);
	if ((*list)->content > (*list)->next->content)
		sa(list);
}

void	sort_4(t_list **list_a, t_list **list_b)
{
	t_list	*smaller;

	smaller = find_bigger_or_smaller(*list_a, -1);
	if (smaller == (*list_a)->next)
		ra(list_a);
	else if (smaller == (*list_a)->next->next)
	{
		rra(list_a);
		rra(list_a);
	}
	else if (smaller == ft_lstlast(*list_a))
		rra(list_a);
	if (is_sorted(*list_a) == true)
		return ;
	pb(list_a, list_b);
	sort_3(list_a);
	pa(list_a, list_b);
}

void	sort_5(t_list **list_a, t_list **list_b)
{
	t_list	*smaller;

	smaller = find_bigger_or_smaller(*list_a, -1);
	if (smaller == (*list_a)->next)
		ra(list_a);
	else if (smaller == (*list_a)->next->next)
	{
		ra(list_a);
		ra(list_a);
	}
	else if (smaller == ft_lstlast(*list_a)->prev)
	{
		rra(list_a);
		rra(list_a);
	}
	else if (smaller == ft_lstlast(*list_a))
		rra(list_a);
	if (is_sorted(*list_a))
		return ;
	pb(list_a, list_b);
	sort_4(list_a, list_b);
	pa(list_a, list_b);
}

t_list	*find_bigger_or_smaller(t_list *list, int difference)
{
	t_list	*bigger_or_smaller;

	bigger_or_smaller = list;
	while (list->next != NULL)
	{
		if (difference == 1)
		{
			if (bigger_or_smaller->content < list->next->content)
				bigger_or_smaller = list->next;
		}
		else if (difference == -1)
		{
			if (bigger_or_smaller->content > list->next->content)
				bigger_or_smaller = list->next;
		}
		list = list->next;
	}
	return (bigger_or_smaller);
}
