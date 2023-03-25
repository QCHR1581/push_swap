/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:27:12 by chasling          #+#    #+#             */
/*   Updated: 2023/03/25 15:52:19 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max(t_list **stack)
{
	t_list *curr;
	int	max;

	curr = *stack;
	max = curr->num;
	while (curr)
	{
		if (curr->num > max)
			max = curr->num;
		curr = curr->next;
	}
	return (max);
}

int	get_size(t_list **stack)
{
	t_list *curr;
	int	i;

	curr = *stack;
	i = 0;
	while (curr)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}