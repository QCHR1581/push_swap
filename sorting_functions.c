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

// void	sort_three(t_list **stack_a, t_list **stack_b, int bits)
// {
	
// }