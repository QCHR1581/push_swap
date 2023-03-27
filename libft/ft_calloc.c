/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:54:35 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:13:22 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void				*p;
	unsigned long long	res;

	res = nmemb * size;
	if (res > 2147483647 || (nmemb == SIZE_MAX && size == SIZE_MAX))
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (p);
	ft_bzero(p, nmemb * size);
	return (p);
}
/*
int main(void)
{
		char	*p;
		p = (char *)ft_calloc(SIZE_MAX, SIZE_MAX);
		if (p == NULL)
			printf("Memory not allocated");
		else
			printf("Memory allocated: %d", *p);
}
*/
