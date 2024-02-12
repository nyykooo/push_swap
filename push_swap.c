/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:52:39 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/12 15:30:11 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list *stack_a;

	if (ac < 2)
		return (0);
	stack_a = NULL;
	if (ac == 2)
		handle_2_args(av, &stack_a);
	if (ac > 2)
		handle_many_args(ac, av, &stack_a);
	if (is_sorted(stack_a) == true)
	{
		ft_freelst(&stack_a);
		return (0);
	}
	sort_list(&stack_a);
	// ft_print_list(stack_a);
	ft_freelst(&stack_a);
	return 1;
}
