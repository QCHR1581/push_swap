/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:29:28 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:14:07 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char c = ' ';

	printf("Is char printable: %d\n", ft_isprint(c));
	printf("Is char printable: %d", isprint(c));
}
*/
