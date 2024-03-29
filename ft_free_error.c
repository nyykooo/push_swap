/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:18:55 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/12 15:09:59 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_list **stack)
{
	write(2, "Error\n", 6);
	if (stack)
		ft_freelst(stack);
	exit(0);
}

void	ft_freemega(char **str)
{
	int	i;

	i = 0;
	while(i < arg_len(str))
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_freelst(t_list **lst)
{
	t_list	*temp;
	t_list	*head;

	if (!lst)
		return ;
	if (*lst)
	{	
		head = *lst;
		while(head)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
