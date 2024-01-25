/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:20:54 by ncampbel          #+#    #+#             */
/*   Updated: 2024/01/25 17:14:25 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long		ft_atol(char *nbr)
{
	long	res;
	int		signal;

	res = 0;
	signal = 1;
	if (*nbr == 45)
	{
		signal *= (-1);
		nbr++;
	}
	else if (*nbr == 43)
		nbr++;
	while(*nbr >= 48 && *nbr <= 57)
		res = res * 10 + (*nbr++ - 48);
	return (res * signal);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int	size;
	char	*new;
	int	i;
	
	size = (ft_strlen(str1) + ft_strlen(str2));
	if (!str1 && !str2)
		return NULL;
	new = (char *)malloc(sizeof(char)*(size + 2));//space + null
	if (!new)
		return NULL;
	i = 0;
	while (str1[i] != '\0');
	{
		new [i] = str1[i];
		i++;
	}
	new[i] = 32;
	i = 0;
	while (str2 != '\0')
	{
		new[i] = str2[i];
		i++;
	}
	new[i] == '\0';
	return (new);
}

int	ft_count_words(char *str)
{
	int	i;
	int	count;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
			i++;
		if (str[i] == '\0')
			break ;
	}
}

char	**ft_split(char *str)
{
	int	i;
	int	size;
	char **stack;
}