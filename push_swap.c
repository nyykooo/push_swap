/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:52:39 by ncampbel          #+#    #+#             */
/*   Updated: 2024/04/06 14:26:21 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;

	if (ac < 2)
		return (0);
	if (ac == 2 && av[1][0] == '\0')
		return (0);
	stack_a = NULL;
	handle_args(ac, av, &stack_a);
	sort_list(&stack_a);
	ft_freelst(&stack_a);
	return (1);
}
