/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subject_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:33:28 by ncampbel          #+#    #+#             */
/*   Updated: 2024/01/23 18:18:01 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>
// #include <stdio.h>
// #include <stdlib.h>
#include "push_swap.h"

void	swap(t_list **stack)
{
	long temp;

	temp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = temp;
}

void	rotate(t_list **stack)
{
	t_list *tempStack;
	t_list *toLast;

	if (!(*stack) || (*stack)->next == NULL)
		return ;
	toLast = *stack;
	tempStack = ft_lstlast(*stack);
	(*stack) = (*stack)->next;
	toLast->next = NULL;
	tempStack->next = toLast;
}

void	reverse_rotate(t_list **stack)
{
	t_list *new_first;

	new_first = ft_lstlast(*stack);
	new_first->prev->next = NULL;
	new_first->prev = NULL;
	new_first->next = (*stack);
	*stack = new_first;
}

t_list  *ft_lstnew(int content)  // Updated the content type to int for simplicity
{
    t_list *node;
    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return NULL;
    node->content = content;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

// int main()
// {
//     t_list *list = NULL; // Use a single pointer, not a double pointer
//     int s1 = 1;
//     int s2 = 2;
//     int s3 = 3;
//     int s4 = 4;
//     t_list *n1 = ft_lstnew(s1);
//     t_list *n2 = ft_lstnew(s2);
//     t_list *n3 = ft_lstnew(s3);
//     t_list *n4 = ft_lstnew(s4);
//     n1->next = n2;
//     n2->prev = n1;
//     n2->next = n3;
//     n3->prev = n2;
//     n3->next = n4;
//     n4->prev = n3;
//     // Pass the address of the first node to swap
//     reverse_rotate(&n1);
//     // Print the contents of the modified list
//     t_list *current = n1;
//     t_list *temp = current;
//     while (current)
//     {
//         printf("%ld\n", current->content);
//         *temp = *current;
//         current = current->next;
//         free(temp);
//     }
//     return 0;
// }