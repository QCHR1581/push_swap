/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:09:24 by chasling          #+#    #+#             */
/*   Updated: 2023/03/20 11:04:46 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int				i;
	int				minus_counter;
	long long int	res;

	i = 0;
	minus_counter = 1;
	res = 0;
	while ((nptr[i] <= '\r' && nptr[i] >= '\t') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			minus_counter = -1;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		res = res * 10 + (nptr[i++] - '0');
		if (res * minus_counter > 2147483647)
			return (-1);
		if (res * minus_counter < -2147483648)
			return (0);
	}
	return (res * minus_counter);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char num[] = "-9223372036854775806";

	printf("Convert %s to : %d\n", num,ft_atoi(num));
	printf("Convert %s to : %d", num, atoi(num));
}
*/
