/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:49:16 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/06 18:34:07 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_add(t_list **lst, long number)
{
    t_list	*new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
    {
		ft_freelst(lst);
		return;
	}
	new->content = number;
	new->prev = NULL;
	new->next = NULL;
	new->index = 0;
	if (!(*lst))
    {
        *lst = new;
        return ;
    }
	lst_add_back(lst, new);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
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

t_list	*find_bigger(t_list *list)
{
	t_list	*bigger;

	bigger = list;
	while (list->next)
	{
		if (bigger->content < list->content)
			bigger = list;
		list = list->next;
	}
	return (bigger);
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst->index = i;
		lst = lst->next;
		i++;
	}
	return (i);
}
