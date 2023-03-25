/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:49:36 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:50 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else if (s1[i] > s2[i] || s1[i] < s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[] = "\200";
	char str2[] = "\0";

	int num = ft_strncmp(str1, str2, 2);
	printf("%d\n", num);

	if (num > 0)
		printf("str1 is greater than str2");
	else if (num == 0)
		printf("str1 is equal to str2");
	else
		printf("str1 is less than str2");
}
*/
