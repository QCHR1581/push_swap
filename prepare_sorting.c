/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_sorting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:27:12 by chasling          #+#    #+#             */
/*   Updated: 2023/04/01 17:06:15 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**sort_array(char **array)
{
	char	*temp;
	int		i;
	int		y;

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
	t_list	*curr;
	int		i;

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
