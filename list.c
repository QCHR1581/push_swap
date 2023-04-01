/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:01:49 by chasling          #+#    #+#             */
/*   Updated: 2023/04/01 17:10:13 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_end(t_list **node, int value)
{
	t_list	*curr;
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		deallocate(node);
	new_node->next = NULL;
	new_node->num = value;
	if (!*node)
	{
		*node = new_node;
		return ;
	}
	curr = *node;
	while (curr->next)
		curr = curr->next;
	curr->next = new_node;
}

void	insert_beginning(t_list **node, int value)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		deallocate(node);
	new_node->num = value;
	new_node->next = *node;
	*node = new_node;
}

void	insert_after(t_list *node, int value)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		deallocate(&node);
	new_node->next = node->next;
	new_node->num = value;
	node->next = new_node;
}

void	deallocate(t_list **node)
{
	t_list	*curr;
	t_list	*aux;

	curr = *node;
	while (curr)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	*node = NULL;
}

void	deallocate_stacks(t_list **stack_a, t_list **stack_b)
{
	if (stack_a)
		deallocate(stack_a);
	if (stack_b)
		deallocate(stack_b);
	exit (1);
}
