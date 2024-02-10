/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_sorted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:05:11 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/08 19:47:30 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool    is_sorted(t_list *list)
{
    t_list *temp;

    temp = list;
    while (temp->next)
    {
        if (temp->content > temp->next->content)
            return (false);
        temp = temp->next;
    }
    return (true);
}

bool    is_dup(t_list **list)
{
    t_list *temp;
    t_list *temp2;

    if (!(*list) || !(*list)->next)
        return (false);
    temp = *list;
    while (temp->next)
    {
        temp2 = temp->next;
        while (temp2)
        {
            if (temp->content == temp2->content)
                return (true);
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    return (false);
}
