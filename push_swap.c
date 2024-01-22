#include "push_swap.h"

static void	print_list(t_list	*list)
{
	while (list != NULL)
	{
		printf("%ld, ", list->content);
		if (list->next == NULL)
			break ;
		list = list->next;
	}
}

int	main(int ac, char **av)
{
	int	i;
	t_list *stackA ;

	i = 1;
	stackA = NULL;
	if (ac < 2)// retorno de erro menos de 1 argumento
	{
		write(2,"Error", 5);
		return 0;
	}
	while (i < ac)
	{ 
		if (ft_analyze_av(av[i]) == 0) // retorno de erro problemas na string
		{
			write(2,"Error\n", 6);
			ft_freelst(&stackA); //apagar stack
			exit(0);
		}
		ft_add_av(av[i], &stackA); //criacao da stack
		i++;
	}

//PRINTANDO VALORES DENTRO DA STACK
	print_list(stackA);
	if (stackA)
		ft_freelst(&stackA);
}
