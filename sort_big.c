/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:12:33 by chasling          #+#    #+#             */
/*   Updated: 2023/04/01 18:06:08 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sorted_status(t_list **stack_a, t_list **stack_b)
{
	t_list	*curr;

	curr = *stack_a;
	while (curr->next && curr->num < curr->next->num)
		curr = curr->next;
	if (!curr->next)
		deallocate_stacks(stack_a, stack_b);
}

void	sort_big(t_list **stack_a, t_list **stack_b, int bits)
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
