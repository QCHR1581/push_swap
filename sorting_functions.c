/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:12:33 by chasling          #+#    #+#             */
/*   Updated: 2023/03/28 17:04:41 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **stack_a, t_list **stack_b, int bits)
{
	int		count;
	int		reps;
	int		i;

	count = 0;
	reps = 0;
	while (bits > 0)
	{
		i = get_size(stack_a);
		while (i > 0)
		{
			reps += check_bits(stack_a, stack_b, (*stack_a)->i, count);
			i--;
		}
		bits--;
		count++;
		while (reps > 0)
		{
			pa(stack_a, stack_b);
			reps--;
		}
	}
}

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

// void	sort_four(t_list **stack)
// {

// }