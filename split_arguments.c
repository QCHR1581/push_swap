/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:08:56 by chasling          #+#    #+#             */
/*   Updated: 2023/03/28 18:07:43 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*join_arguments(char **argv, int argc)
{
	char	*buffer;
	char	*buffer_two;
	char	*temp;
	char	*str;	
	int		i;

	i = 1;
	temp = (char *)ft_calloc(1, sizeof(char));
	while (i < argc)
	{
		buffer = argv[i];
		str = ft_strjoin(temp, buffer);
		if (!str)
		{
			while (i > 0)
				free(argv[i--]);
			exit (1);
		}
		free(temp);
		buffer_two = str;
		temp = ft_strjoin(buffer_two, " ");
		free(str);
		str = temp;
		i++;
	}
	return (str);
}

char	**split_arguments(char *str)
{
	char	**split;

	split = ft_split(str, ' ');
	if (!split)
	{
		free(str);
		exit (1);
	}
	free (str);
	return (split);
}
