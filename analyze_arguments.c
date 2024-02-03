/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze_arguments.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:32:20 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/03 15:31:56 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_issign(char sign)//look if the char is a signal (+ or -)
{
	if (sign == 43 || sign == 45)
		return (1);
	return (0);
}

static int	ft_isnumber(char nbr)//verify if the char is a number
{
	if ((nbr >= 48 && nbr <= 57))
		return (1);
	return(0);
}

static int	ft_isspace(char space)
{
	if (space == 32)
		return 1;
	return 0;
}

int	ft_analyze_av(char *av)
{
	int	i;

	i = 0;
	while(av[i] != '\0')
	{
		if ((ft_isnumber(av[i]) == 0) && (ft_issign(av[i]) == 0) && (ft_isspace(av[i]) == 0))//verify if it's a number, signal or space
		{
			return 0;
		}
		if ((av[i] == 43 || av[i] == 45) && (!(av[i + 1] >= 48 && av[i + 1] <= 57) || (i > 0)))//verify if after a fignal is a number
			return 0;
		if (av[i] == 32 && (((ft_isnumber(av[i + 1]) == 0) && (ft_issign(av[i + 1]) == 0)) || i == 0))//don't allow spaces on the begining and end of the string, and make sure that after a space is always a number or a signal
			return 0;
		i++;
	}
	return 1;
}
