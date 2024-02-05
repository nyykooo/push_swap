/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:52:39 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/05 16:24:48 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int i;
	t_list **stack_a;

	i = 1;
	if (ac < 2)
		return (0);
	stack_a = (t_list **)malloc(sizeof(t_list*));
	if (!stack_a)
		return (1);
	*stack_a = NULL;
	if (ac == 2)
		handle_2_args(av, stack_a);
	if (ac > 2)
		handle_many_args(ac, av, stack_a);
	//ft_print_list(*stack_a);
	ft_freelst(stack_a);	
	return 1;
}
