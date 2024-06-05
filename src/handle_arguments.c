/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_arguments.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:28:05 by ncampbel          #+#    #+#             */
/*   Updated: 2024/04/06 14:22:16 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	arg_len(char **av)
{
	int	i;

	i = 1;
	while (av[i] != NULL)
		i++;
	return (i);
}

void	handle_args(int ac, char **av, t_list **stack_a)
{
	int		i;
	int		j;
	char	**args;

	i = 1;
	while (i < ac)
	{
		j = 0;
		args = ft_split(av[i], ' ');
		while (args[j])
		{
			if (ft_analyze_av(args[j]) == 0)
				ft_error(stack_a, args);
			if (ft_strlen(args[j]) == 0)
				ft_error(stack_a, args);
			ft_add_av(args[j], stack_a, args);
			j++;
		}
		free_array(args);
		i++;
	}
}
