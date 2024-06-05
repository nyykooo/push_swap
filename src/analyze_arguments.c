/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze_arguments.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:32:20 by ncampbel          #+#    #+#             */
/*   Updated: 2024/04/06 14:17:40 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_issign(char sign)
{
	if (sign == 43 || sign == 45)
		return (1);
	return (0);
}

static int	ft_isnumber(char nbr)
{
	if ((nbr >= 48 && nbr <= 57))
		return (1);
	return (0);
}

int	ft_analyze_av(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
	{
		if ((ft_isnumber(av[i]) == 0) && (ft_issign(av[i]) == 0))
			return (0);
		if ((ft_issign(av[i]) == 1) && (ft_isnumber(av[i + 1]) == 0 || (i > 0)))
			return (0);
		i++;
	}
	return (1);
}

int	ft_only_spaces(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0' || av[i] == ' ')
		i++;
	if (av[i] == '\0')
		return (1);
	return (0);
}
