/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:06:52 by chasling          #+#    #+#             */
/*   Updated: 2023/03/25 15:52:11 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# include "./libft/libft.h"
# define PUSH_SWAP_H

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}				t_list;

void	read_arguments(char **split, t_list **node);
char	*join_arguments(char **argv, int argc);
char	**split_arguments(char *str);
int		get_max(t_list **stack);
int		get_size(t_list **stack);
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
