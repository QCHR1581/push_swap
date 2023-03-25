/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:02:54 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:13:45 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int main(void)
{
	int a = 111;

	printf("variable isalpha: %d\n", ft_isalpha(a));
	printf("variable isalpha: %d", isalpha(a));
	return (0);
}
*/
