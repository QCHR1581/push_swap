/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:43:38 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:40 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;

	y = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (y);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char src[] = "World";
	char dst[] = "Hello";

	printf("Src before is: %s\n", src);
	printf("Dst before is: %s\n\n", dst);


	printf("%ld. Dest after is: %s", ft_strlcpy(dst, src, 3), dst);
}
*/
