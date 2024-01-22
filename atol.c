/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atol.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:20:54 by ncampbel          #+#    #+#             */
/*   Updated: 2024/01/20 18:28:33 by ncampbel         ###   ########.fr       */
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

// #include <stdio.h>

// int	main(void){
// 	char *nbr = "321651";

// 	int number = atoi(nbr);

// 	printf("%d", number);
// }