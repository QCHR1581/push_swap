/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:35:02 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:14:16 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		if ((char)c == str[i])
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[] = "hello";
	int v = 'h';
	char *p = ft_memchr(str, v, 3);

	printf("\"%c\" can be found in \"%s\": %s", v, str, p);
}
*/
