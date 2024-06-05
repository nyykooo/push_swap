/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_av.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:35:17 by ncampbel          #+#    #+#             */
/*   Updated: 2024/04/06 14:27:15 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static bool	int_number(const char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (nbr[i] == '-' || nbr[i] == '+')
			i++;
		while (nbr[i] == '0')
			i++;
		if (ft_strlen(nbr + i) >= 11)
			return (false);
		else
			return (true);
	}
	return (true);
}

void	ft_add_av(char *av, t_list **stack, char **args)
{
	if (int_number(av) == false)
		ft_error(stack, args);
	if (ft_atol(av) > INT_MAX || ft_atol(av) < INT_MIN) 
		ft_error(stack, args);
	else
		lst_add(stack, ft_atol(av));
	if (is_dup(stack) == true)
		ft_error(stack, args);
}
