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

int	get_max_num(t_list **stack)
{
	t_list *curr;
	int	max;

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

void	index_linked_list(t_list **stack, char **array)
{
	t_list *curr;
	int	i;

	curr = *stack;
	i = 0;
	while (curr)
	{
		while (array[i])
		{
			if (ft_atoi(array[i]) == curr->num)
				curr->i = i;
			i++;
		}
		i = 0;
		curr = curr->next;
	}
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