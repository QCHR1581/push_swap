/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:24:44 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:13:27 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int v = '\0';

	printf("%c isalnum: %d\n", v, ft_isalnum(v));
	printf("%c isalnum: %d\n", v, isalnum(v));
}
*/
