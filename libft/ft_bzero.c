/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:16:09 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:13:17 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string1[] = "Hello";
	char string2[] = "Hello";

	printf("String1 before bzero: %s\n", string1);
	printf("String2 before bzero: %s\n\n", string2);

	bzero(string1, 3);
	ft_bzero(string2, 3);
	int i_one = 0;
	int i_two = 0;

	while (string1[i_one] == '\0')
		i_one++;
	printf("%d\n", i_one);

	while (string2[i_two] == '\0')
		i_two++;
	printf("%d", i_two);
}
*/
