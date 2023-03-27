/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:51:48 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:13:50 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int i = 50;

	printf("Variable is on ASCII: %d\n", ft_isascii(i));
	printf("Variable is on ASCII: %d", isascii(i));
}
*/
