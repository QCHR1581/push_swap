/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:35:02 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 12:34:53 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s[0] == (char)c)
		return ((char *)s + i);
	while (s[i])
	{
		i++;
		if ((char)c == s[i])
			return ((char *)s + i);
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "tipouille";
	char v = '\0';

	printf("%p", strchr(str, v));
}
*/
