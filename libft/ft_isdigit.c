/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:09:18 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:14:00 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int digit = '8';

	printf("Variable isdigit: %d\n", ft_isdigit(digit));
	printf("Variable isdigit: %d", isdigit(digit));
}
*/
