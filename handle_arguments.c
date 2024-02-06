/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_arguments.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:28:05 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/06 17:51:49 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arg_len(char **av)
{
	int i;

	i = 1;
	while (av[i] != NULL)
		i++;
	return (i);
}
void	handle_2_args(char **av, t_list **stack_a)
{
	char **mega;

	mega = NULL;
	if (ft_strlen(av[1]) == 0 || ft_analyze_av(av[1]) == 0 )
		ft_error(stack_a);
	mega = ft_split(av[1], ' ');
	if (mega == NULL)
		ft_error(stack_a);
	handle_many_args(arg_len(mega), mega, stack_a);
	ft_freemega(mega);
}

void	handle_many_args(int ac, char **av, t_list **stack_a)
{
	int i;

	i = 1;
	while (i < ac)
	{
		if (ft_analyze_av(av[i]) == 0)
			ft_error(stack_a);
		if (ft_strlen(av[i]) == 0)
			ft_error(stack_a);
		ft_add_av(av[i++], stack_a);
	}
}

