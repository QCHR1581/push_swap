/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:29:40 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:27 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	y;

	if (!s1 || !s2)
		return (NULL);
	p = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!p)
		return (NULL);
	i = 0;
	y = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		p[i] = s2[y];
		i++;
		y++;
	}
	p[i] = '\0';
	return (p);
}
/*
int main(void)
{
	char str1[] = "Hello ";
	char str2[] = "World";

	printf("strjoin of %s and %s is: %s", str1, str2, ft_strjoin(str1, str2));
}
*/
