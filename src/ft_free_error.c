/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:18:55 by ncampbel          #+#    #+#             */
/*   Updated: 2024/04/06 14:25:25 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(t_list **stack, char **array)
{
	write(2, "Error\n", 6);
	if (stack)
		ft_freelst(stack);
	if (array)
		free_array(array);
	exit(0);
}

int	free_array(char **av)
{
	int	j;

	j = 0;
	while (av[j])
	{
		free(av[j]);
		j++;
	}
	free(av);
	return (1);
}

void	ft_freemega(char **str)
{
	int	i;

	i = 0;
	while (i < arg_len(str))
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
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
