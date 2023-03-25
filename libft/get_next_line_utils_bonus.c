/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:33:30 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:16:18 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	my_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*my_strchr(const char *s, int c)
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

size_t	my_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;

	y = my_strlen(src);
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

char	*my_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	y;

	if (!s1 || !s2)
		return (NULL);
	p = malloc(my_strlen(s1) + my_strlen(s2) + 1);
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

void	*my_calloc(size_t nmemb, size_t size)
{
	char				*p;
	unsigned long long	res;
	size_t				i;

	res = nmemb * size;
	if (res > 2147483647 || (nmemb == SIZE_MAX && size == SIZE_MAX))
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (p);
	i = 0;
	while (i < nmemb * size)
	{
		p[i] = '\0';
		i++;
	}
	return ((void *)p);
}
