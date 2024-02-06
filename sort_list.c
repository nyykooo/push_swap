/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:48:03 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/06 18:21:40 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_list(t_list **list)
{
	if (ft_lstsize(*list) == 3)
		sort_3(list);
	else
		return ;
}

void	sort_3(t_list **list)
{
	t_list *bigger;

	bigger = find_bigger(*list);
	if (bigger == *list)
	{
		rotate(list);
		write(1, "ra\n", 3);
	}
	else if (bigger == (*list)->next)
	{
		reverse_rotate(list);
		write(1, "rra\n", 4);
	}
	if ((*list)->content > (*list)->next->content)
	{
		swap(list);
		write(1, "sa\n", 3);
	}
}

