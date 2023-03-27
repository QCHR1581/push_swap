/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:26:50 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:14:39 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while ((int)n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((void *)d);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char numbers[] = "0123456789";

	printf("Original: %s\n", numbers);

	ft_memmove(numbers + 5, numbers + 3, 5);

	printf("Original after memmove: %s", numbers);
}
*/
