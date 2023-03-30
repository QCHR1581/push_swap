/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:44:57 by chasling          #+#    #+#             */
/*   Updated: 2023/03/28 18:15:48 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*curr_a;
	// t_list	*curr_b;
	// char		*str;
	char		**split;
	char		*str;
	char		**sorted_array;
	int			size;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (1);
	str = join_arguments(argv, argc);
	split = split_arguments(str);
	read_arguments(split, &stack_a);
	sorted_array = sort_array(split);
	index_linked_list(&stack_a, sorted_array);
	size = get_size(&stack_a);
	if (size == 2)
			sort_two(&stack_a);
	if (size == 3)
			sort_three(&stack_a);
	// else if (size == 4)
	// 	sort_four(&stack_a);
	// else if (size == 5)
	// 	sort_five(&stack_a, &stack_b);
	else
		sort(&stack_a, &stack_b, max_index_bits(size - 1));
	curr_a = stack_a;
	// curr_b = stack_b;
	while (curr_a)
	{
		ft_printf("stack_a(n): %d\n", curr_a->num);
		ft_printf("stack_a(i): %d\n\n", curr_a->i);
		curr_a = curr_a->next;
	}
	ft_printf("\n");
	// while (curr_b)
	// {
	// 	ft_printf("stack_b(n): %d\n", curr_b->num);
	// 	curr_b = curr_b->next;
	// }
	free_array(sorted_array);
	deallocate_stacks(&stack_a, &stack_b);
}
