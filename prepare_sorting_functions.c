/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_sorting_functions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:27:12 by chasling          #+#    #+#             */
/*   Updated: 2023/03/28 17:37:46 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

char	**sort_array(char **array)
{
	char *temp;
	int	i;
	int	y;
	
	i = 0;
	y = 0;
	while (array[i])
	{
		while (array[y + 1])
		{
			if (ft_atoi(array[y]) > ft_atoi(array[y + 1]))
			{
				temp = array[y + 1];
				array[y + 1] = array[y];
				array[y] = temp;
			}
			y++;
		}
		y = 0;
		i++;
	}
	return (array);
}

int	index_linked_list(t_list **stack, char **array)
{
	t_list *curr;
	int	i;
	int	y;

	curr = *stack;
	i = 0;
	y = 0;
	while (curr)
	{
		while (array[i])
		{
			if (ft_atoi(array[i]) == curr->num)
				curr->i = i;
			i++;
		}
		if (i > y)
			y = i;
		i = 0;
		curr = curr->next;
	}
	return (y - 1);
}

int	max_index_bits(int num)
{
	int	count;
	int	num_two;
	int	cmp;
	int	i;

	count = 1;
	num_two = 0;
	i = 0;
	if (num == 1)
		return (1);
	while (num_two != num)
	{
		cmp = num & (1 << count);
		if (cmp)
		{
			num_two = ~num_two;
			num_two <<= 1;
			num_two = ~num_two;
		}
		else
			num_two <<= 1;
		count++;
		cmp = 0;
		i++;
	}
	return (count);
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