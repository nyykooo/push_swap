/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:54:03 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/10 18:41:23 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_list(t_list *stack)
{
	if(stack == NULL)
		return ;
	while (stack)
	{
		printf("print list: %ld\n", stack->content);
		stack = stack->next;
	}
}