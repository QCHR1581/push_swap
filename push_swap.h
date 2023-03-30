/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:06:52 by chasling          #+#    #+#             */
/*   Updated: 2023/03/27 16:40:00 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# include "./libft/libft.h"
# define PUSH_SWAP_H

typedef struct s_list
{
	int				num;
	int				i;
	struct s_list	*next;
}				t_list;

void	read_arguments(char **split, t_list **node);
char	*join_arguments(char **argv, int argc);
char	**split_arguments(char *str);
char	**sort_array(char **array);
int		get_size(t_list **stack);
void	index_linked_list(t_list **stack, char **array);
int		max_index_bits(int num);
int		get_max_num(t_list **stack);
int		check_bits(t_list **stack_a, t_list **stack_b, int num, int count);
void	sort(t_list **stack_a, t_list **stack_b, int bits);
void	sort_two(t_list **stack_a);
void	sort_three(t_list **stack_a);
void	sort_four(t_list **stack_a);
void	free_array(char **array);
void	s(t_list **node, char c);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	r(t_list **stack, char c);
void	rr(t_list **stack_a, t_list **stack_b);
void	rv(t_list **stack, char c);
void	rrv(t_list **stack_a, t_list **stack_b);
void	error(char **split, t_list **node);
void	deallocate_stacks(t_list **stack_a, t_list **stack_b);
void	insert_end(t_list **node, int value);
void	insert_beginning(t_list **node, int value);
void	insert_after(t_list *node, int value);
void	deallocate(t_list **node);
#endif
