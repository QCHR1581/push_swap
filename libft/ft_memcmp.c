/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:49:36 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:14:25 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*str1;
	const unsigned char		*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (i < n)
	{
		if (str1[i] > str2[i] || str1[i] < str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[] = "\xff\xaa\xde\xffMACOSX\xff";
	char str2[] = "\xff\xaa\xde\x02";

	int num = memcmp(str1, str2, 8);

	if (num > 0)
		printf("str1 is greater than str2");
	else if (num == 0)
		printf("str1 is equal to str2");
	else
		printf("str1 is less than str2");
}
*/
