/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:27:03 by chasling          #+#    #+#             */
/*   Updated: 2023/03/21 11:04:42 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list *node_to_move;

	if (!*stack_b)
		return ;
	node_to_move = *stack_b;	
	*stack_b = (*stack_b)->next;
	node_to_move->next = *stack_a;
	*stack_a = node_to_move;
	ft_printf("pa\n");
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list *node_to_move;

	if (!*stack_a)
		return ;
	node_to_move = *stack_a;	
	*stack_a = (*stack_a)->next;
	node_to_move->next = *stack_b;
	*stack_b = node_to_move;
	ft_printf("pb\n");
}
