/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:43:40 by chasling          #+#    #+#             */
/*   Updated: 2023/04/01 18:07:10 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s(t_list **stack, char c)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = (*stack)->next;
	third = (*stack)->next->next;
	(*stack)->next->next = first;
	(*stack)->next = third;
	*stack = second;
	if (c == 's')
		ft_printf("%c", c);
	else
		ft_printf("s%c\n", c);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	s(stack_a, 's');
	s(stack_b, 's');
	ft_printf("\n");
}
