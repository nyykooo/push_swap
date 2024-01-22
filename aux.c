/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:20:54 by ncampbel          #+#    #+#             */
/*   Updated: 2024/01/20 18:22:34 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_av(char *av, t_list **stack)
{
	int	size;
	int	i;

	if (ft_atol(av) > INT_MAX || ft_atol(av) < INT_MIN)
	{
		write(2, "Error", 5);
		ft_freelst(stack); //deletar stackA antes de quitar do programa
		exit (0);
	} else
		lst_add(stack, ft_atol(av)); //include nbr at the end of table
}

int	ft_analyze_av(char *av)
{
	int	i;

	i = 0;
	while(av[i] != '\0')
	{
		if (ft_isnumber(av[i] == 0) && (ft_issign(av[i]) == 0)){
			write(1, "erro1", 5);
			return 0;}
		if ((av[i] == 43 || av[i] == 45) && (!(av[i + 1] >= 48 && av[i + 1] <= 57) || (i > 0))) {
			write(1, "erro2", 5);
			return 0;
		}
		i++;
	}
	return 1;
}

int	ft_issign(char sign)
{
	if (sign == 43 || sign == 45)
		return (1);
	return (0);
}

int	ft_isnumber(char nbr)
{
	if ((nbr >= 48 && nbr <= 57))
		return (1);
	return(0);
}
