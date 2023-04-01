/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:12:33 by chasling          #+#    #+#             */
/*   Updated: 2023/04/01 17:09:20 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **stack_a)
{
	if ((*stack_a)->num > (*stack_a)->next->num)
		r(stack_a, 'a');
}

void	sort_three(t_list **stack)
{
	if ((*stack)->num == get_max_num(stack)
		&& (*stack)->next->num < (*stack)->next->next->num)
		r(stack, 'a');
	else if ((*stack)->num == get_max_num(stack)
		&& (*stack)->next->num > (*stack)->next->next->num)
	{
		r(stack, 'a');
		s(stack, 'a');
	}
	else if ((*stack)->next->num == get_max_num(stack)
		&& (*stack)->num < (*stack)->next->next->num)
	{
		rv(stack, 'a');
		s(stack, 'a');
	}
	else if ((*stack)->next->num == get_max_num(stack)
		&& (*stack)->num > (*stack)->next->next->num)
		rv(stack, 'a');
	else if ((*stack)->next->next->num == get_max_num(stack)
		&& (*stack)->num > (*stack)->next->num)
		s(stack, 'a');
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	check_sorted_status(stack_a, stack_b);
	while ((*stack_a)->i != 0)
		r(stack_a, 'a');
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	check_sorted_status(stack_a, stack_b);
	while ((*stack_a)->i != 0)
		r(stack_a, 'a');
	pb(stack_a, stack_b);
	while ((*stack_a)->i != 1)
		r(stack_a, 'a');
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_small(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else
		sort_five(stack_a, stack_b);
}
