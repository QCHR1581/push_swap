/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:29:26 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:33 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (size > dst_len)
	{
		i = 0;
		y = dst_len;
		while (src[i] && i < size - dst_len - 1)
		{
			dst[y] = src[i];
			i++;
			y++;
		}
		dst[y] = '\0';
		return (dst_len + src_len);
	}
	else
		return (size + src_len);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char src[] = "hello my dear love";
	char dst[10] = "there";

	printf("Src before: %s\n", src);
	printf("Dst before: %s\n\n", dst);

	printf("%ld\nDst after: %s", ft_strlcat(dst, src, 10), dst);

}
*/
