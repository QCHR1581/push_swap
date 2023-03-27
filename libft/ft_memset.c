/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:13:20 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:14:47 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[] = "Hello world";
	char string2[] = "Hello world";
	printf("String before  memset: %s\n", string);
	printf("String2 before memset: %s\n", string2);

	memset(string, 'a', 5);
	ft_memset(string2, 'a', 5);
	printf("String after   memset: %s\n", string);
	printf("String2 after  memset: %s\n", string2);
}
*/
