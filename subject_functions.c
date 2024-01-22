/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subject_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:33:28 by ncampbel          #+#    #+#             */
/*   Updated: 2024/01/20 19:16:58 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int		value;
	struct s_list	*next;
	struct s_list	*prev;
}			t_list;

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	swap(t_list **stack)
{
	int temp;

	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
}

void	rotate(t_list **stack)
{
	int temp1;
	int temp2;

	temp1 = (*stack)->value;
	ft_lstlast(*stack);
	temp2 = (*stack)->value;
	(*stack)->value = temp1;
	while((*stack)->prev != NULL)
	{
		temp1 = (*stack)->prev->value;
		(*stack)->prev->value = temp2;
		*stack = (*stack)->prev;
		(*stack)->value = temp1;
		temp2 = (*stack)->value;
	}
}

t_list  *ft_lstnew(int content)  // Updated the content type to int for simplicity
{
    t_list *node;
    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return NULL;
    node->value = content;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

int main()
{
    t_list *list = NULL; // Use a single pointer, not a double pointer
    int s1 = 1;
    int s2 = 2;
    int s3 = 3;
    int s4 = 4;
    t_list *n1 = ft_lstnew(s1);
    t_list *n2 = ft_lstnew(s2);
    t_list *n3 = ft_lstnew(s3);
    t_list *n4 = ft_lstnew(s4);
    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;
    // Pass the address of the first node to swap
    rotate(&n1);
    // Print the contents of the modified list
    t_list *current = n1;
    t_list *temp = current;
    while (current)
    {
        printf("%d\n", current->value);
        *temp = *current;
        current = current->next;
        free(temp);
    }
    return 0;
}