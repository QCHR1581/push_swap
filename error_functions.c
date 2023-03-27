/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:33:41 by chasling          #+#    #+#             */
/*   Updated: 2023/03/25 13:39:55 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(char **split, t_list **node)
{
	int	i;

	i = 0;
	ft_putstr_fd("Error\n", 2);
	deallocate(node);
	while (split[i])
		free(split[i++]);
	free(split);
	exit(1);
}