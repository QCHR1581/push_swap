/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:33:41 by chasling          #+#    #+#             */
/*   Updated: 2023/04/02 11:39:33 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(char **split, t_list **node)
{
	int	i;

	i = 0;
	ft_putstr_fd("Error\n", 2);
	deallocate(node);
	if (split && split[0])
	{
		while (split[i])
			free(split[i++]);
	}
	if (split)
		free(split);
	exit(1);
}
