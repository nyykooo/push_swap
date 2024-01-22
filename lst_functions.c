/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:20:54 by ncampbel          #+#    #+#             */
/*   Updated: 2024/01/19 18:19:21 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_add(t_list **lst, long number)
{
	static int index;

	index = 0;
	t_list	*new = malloc(sizeof(t_list));
	if (!new)
		ft_freelst(lst);
	new->content = number;
	new->index = index++;
	lst_add_back(lst, new);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	lst_add_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new) 
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

void	ft_freelst(t_list **lst)
{
	t_list	*temp;
	t_list	*head;

	head = *lst;
	while(head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}