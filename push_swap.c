/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:44:57 by chasling          #+#    #+#             */
/*   Updated: 2023/03/27 17:37:33 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*curr_a;
	// t_list	*curr_b;
	char		*str;
	char		**split;
	char		**sorted_array;
	int			i;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (1);
	str = join_arguments(argv, argc);
	split = split_arguments(str);
	read_arguments(split, &stack_a);
	sorted_array = sort_array(split);
	i = index_linked_list(&stack_a, sorted_array);
	i = max_index_bits(i);
	sort(&stack_a, &stack_b, i);
	// pb(&stack_a, &stack_b);
	curr_a = stack_a;
	// curr_b = stack_b;
	while (curr_a)
	{
		ft_printf("stack_a(n): %d\n", curr_a->num);
		ft_printf("stack_a(i): %d\n\n", curr_a->i);
		curr_a = curr_a->next;
	}
	// ft_printf("\n");
	// while (curr_b)
	// {
	// 	ft_printf("stack_b(n): %d\n", curr_b->num);
	// 	curr_b = curr_b->next;
	// }
	free_array(sorted_array);
	deallocate_stacks(&stack_a, &stack_b);
}
