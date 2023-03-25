/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:53:16 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:14:30 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (!dest && !src)
		return (NULL);
	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)d);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "World";
	char dest[] = "Hello";
	
	printf("Src before memcpy is: %s\n", src);
	printf("Dest before memcpy is: %s\n\n", dest);

//	memcpy(dest, src, 5);
	ft_memcpy((void *)0, (void *)0, 3);

	printf("Dest after memcpy is: %s", dest);
}
*/
