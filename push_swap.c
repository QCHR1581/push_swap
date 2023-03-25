/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:44:57 by chasling          #+#    #+#             */
/*   Updated: 2023/03/21 18:01:49 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*curr_a;
	t_list	*curr_b;
	char		*str;
	char		**split;
	int			i;

	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (1);
	str = join_arguments(argv, argc);
	split = split_arguments(str);
	read_arguments(split, &stack_a);
	while (split[i])
		free(split[i++]);
	free(split);
	insert_end(&stack_b, 4);
	insert_end(&stack_b, 3);
	insert_end(&stack_b, 7);
	// rrv(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	// pa(&stack_a, &stack_b);
	curr_a = stack_a;
	curr_b = stack_b;
	while (curr_a)
	{
		ft_printf("stack_a(n): %d\n", curr_a->num);
		curr_a = curr_a->next;
	}
	ft_printf("\n");
	while (curr_b)
	{
		ft_printf("stack_b(n): %d\n", curr_b->num);
		curr_b = curr_b->next;
	}
	deallocate_stacks(&stack_a, &stack_b);
}
