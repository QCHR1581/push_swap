/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:57:02 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:16:03 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;
	size_t	slen;

	i = 0;
	slen = 0;
	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	if (start + len >= slen)
		len = slen - start;
	p = (char *)malloc((sizeof(char) * len) + 1);
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
