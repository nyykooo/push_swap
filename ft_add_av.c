/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_av.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:35:17 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/03 15:31:30 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_av(char *av, t_list **stack)
{
	if (ft_atol(av) > INT_MAX || ft_atol(av) < INT_MIN)
		ft_error(stack); //free stack if exists and exit
	else
		lst_add(stack, ft_atol(av)); //include nbr at the end of table
}
