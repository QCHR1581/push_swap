/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:34:26 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:55 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (len == 0 && big == NULL)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (big[x] && little[y] && x < len)
	{
		if (big[x] == little[y])
		{
			while (big[x + y] == little[y] && little[y] && x + y < len)
			{
				y++;
				if (little[y] == '\0')
					return ((char *)big + x);
			}
		}
		x++;
		y = 0;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main (void)
{
	char str[30] = "aaabcabcd";
	char search[10] = "aabc";
	char *p;
	char *p2;

	p = strnstr(str, search, -1);
	p2 = ft_strnstr(str, search, -1);

	printf("(strnstr) \"%s\" is in \"%s\": %s\n", search, str, p);
	printf("(ft_strnstr) \"%s\" is in \"%s\": %s\n\n", search, str, p2);
}
*/
