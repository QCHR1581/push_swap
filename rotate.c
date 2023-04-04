/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:27:39 by chasling          #+#    #+#             */
/*   Updated: 2023/04/04 09:53:42 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r(t_list **stack, char c)
{
	t_list	*loop;
	t_list	*second;

	loop = *stack;
	second = (*stack)->next;
	while (loop->next)
		loop = loop->next;
	loop->next = *stack;
	*stack = second;
	loop->next->next = NULL;
	if (c == 'r')
		ft_printf("%c", c);
	else
		ft_printf("r%c\n", c);
}

void	rv(t_list **stack, char c)
{
	t_list	*loop;

	loop = *stack;
	while (loop->next->next)
		loop = loop->next;
	loop->next->next = *stack;
	*stack = loop->next;
	loop->next = NULL;
	if (c == 'r')
		ft_printf("%c", c);
	else
		ft_printf("rr%c\n", c);
}
