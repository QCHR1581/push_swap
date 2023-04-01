/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_sorting_helpers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:27:12 by chasling          #+#    #+#             */
/*   Updated: 2023/04/01 17:11:29 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_size(t_list **stack)
{
	t_list	*curr;
	int		i;

	curr = *stack;
	i = 0;
	while (curr)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}

int	get_max_num(t_list **stack)
{
	t_list	*curr;
	int		max;

	curr = *stack;
	max = curr->num;
	while (curr->next)
	{
		if (curr->next->num > max)
			max = curr->next->num;
		curr = curr->next;
	}
	return (max);
}

int	max_index_bits(int num)
{
	int	max_bits;

	max_bits = 0;
	while ((num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

int	check_bits(t_list **stack_a, t_list **stack_b, int num, int count)
{
	if (num & (1 << count))
	{
		if ((*stack_a)->next)
			r(stack_a, 'a');
		return (0);
	}
	else
	{
		pb(stack_a, stack_b);
		return (1);
	}
}
