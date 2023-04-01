/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_check_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:58:56 by chasling          #+#    #+#             */
/*   Updated: 2023/04/01 14:53:02 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_argument(char *arg)
{
	int			i;
	long int	value;
	int			minus;

	i = 0;
	value = 0;
	minus = 1;
	while (arg[i])
	{
		if (arg[i] == '-')
		{
			minus = -1;
			i++;
		}
		if (!((arg[i] >= '0' && arg[i] <= '9')))
			return (1);
		value = value * 10 + (arg[i] - '0');
		if (value * minus > 2147483647 || value * minus < -2147483648)
			return (1);
		i++;
	}
	return (0);
}

int	check_dups(t_list **node)
{
	t_list	*curr;
	t_list	*comp;

	curr = *node;
	while (curr)
	{
		comp = curr->next;
		while (comp)
		{
			if (comp->num == curr->num)
				return (1);
			comp = comp->next;
		}
		curr = curr->next;
	}
	return (0);
}

void	read_arguments(char **split, t_list **node)
{
	int	i;
	int	value;

	i = 0;
	while (split[i])
	{
		value = ft_atoi(split[i]);
		if (check_argument(split[i]) == 1)
			error(split, node);
		i++;
		insert_end(node, value);
	}
	if (check_dups(node) == 1)
		error(split, node);
}
