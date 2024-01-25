/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:20:54 by ncampbel          #+#    #+#             */
/*   Updated: 2024/01/25 17:18:24 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_build(int ac, char **av)
{
	char **mega_array;
	char *mega_str;
	int	i;

	i = 0;
	while (i < ac)
	{
		if (ft_analyze_av(av[i]) == 0) // retorno de erro problemas na string
		{
			write(2,"Error\n", 6);
			ft_free(mega_str); //apagar stack
			exit(0);
		}
		mega_str = ft_strjoin(mega_str, av[i]);//create mega string and join it
		mega_str = ft_strcut(mega_str);//verify space at end and removes it
	}
	mega_array = ft_split(mega_str);
	
}

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
		if (ft_isnumber(av[i] == 0) && (ft_issign(av[i]) == 0))
			return 0;
		if ((av[i] == 43 || av[i] == 45) && (!(av[i + 1] >= 48 && av[i + 1] <= 57) || (i > 0))) 
			return 0;
		if (av[i] == 32 && (ft_isnumber(av[i + 1]) == 0) || (ft_sign(av[i + 1]) == 0) || ft_isspace(av[i + 1] == 1))
			return 0;
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

int	ft_isspace(char space)
{
	if (space == 32)
		return 1;
	return 0;
}

int	ft_isnumber(char nbr)
{
	if ((nbr >= 48 && nbr <= 57))
		return (1);
	return(0);
}
//removes space from the end of the string (if it ends with a space)
char *ft_strcut(char *str)
{
	char *new;
	int	i;

	i = 0;
	new = NULL;
	while(str[i] != '\0')
		i++;
	if (str[i - 1] == 32)
	{
		new = (char *)malloc(sizeof(char)*(i));
		if (!new)
			return NULL;
		i = 0;
		while (str[i] != '\0')
		{
			new[i] = str[i];
			i++;
		}
		new[i] = NULL;
	}
	if (!new)
		return (str);
	free(str);
	return (new);
}
