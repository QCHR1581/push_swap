/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:12:33 by chasling          #+#    #+#             */
/*   Updated: 2023/03/27 17:55:12 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **stack_a, t_list **stack_b, int bits)
{
	// t_list	*curr;
	int		count;
	int		reps;
	// int		control;

	count = 0;
	reps = 0;
	// curr = *stack_a;
	while (bits > 0)
	{
		while ((*stack_a)->next)
		{
			// control = reps;
			reps += check_bits(stack_a, stack_b, (*stack_a)->num, count);
			// if (*stack_a && control == reps)
				// *stack_a = (*stack_a)->next;
		}
		// *stack_a = curr;
		bits--;
		count++;
		while (reps > 0)
		{
			pa(stack_a, stack_b);
			reps--;
		}
	}
}