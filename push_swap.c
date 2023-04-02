/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:44:57 by chasling          #+#    #+#             */
/*   Updated: 2023/04/02 11:38:09 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*curr_a;
	char	**split;
	char	**sorted_array;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	split = split_arguments(join_arguments(argv, argc));
	if (!split[0])
		error(split, &stack_a);
	read_arguments(split, &stack_a);
	sorted_array = sort_array(split);
	index_linked_list(&stack_a, sorted_array);
	free_array(sorted_array);
	size = get_size(&stack_a);
	check_sorted_status(&stack_a, &stack_b);
	if (size <= 5)
		sort_small(&stack_a, &stack_b, size);
	else
		sort_big(&stack_a, &stack_b, max_index_bits(size - 1));
	curr_a = stack_a;
	while (curr_a)
	{ 
		ft_printf("stack_a(n): %d\n", curr_a->num);
		ft_printf("stack_a(i): %d\n\n", curr_a->i);
		curr_a = curr_a->next;
	}
	deallocate(&stack_a);
}
