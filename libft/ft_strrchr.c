/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:00:38 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:57 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((char)c == s[i])
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "tripouille";
	char v = 0;

	printf("\"%c\" can be found in \"%s\": %s", v, str, ft_strrchr(str, v));
}
*/
