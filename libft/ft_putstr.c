/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:02:57 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:13 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *s)
{
	size_t	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = ft_strlen(s);
	write(1, s, i);
	return (i);
}
/*
int main(void)
{
	ft_putstr("-");
}
*/
