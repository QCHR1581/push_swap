/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ultimate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:36:03 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:04 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_ultimate(long long n, long long base, char c)
{
	int	nbr;

	nbr = 0;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
		nbr = 1;
	}
	if (n < base)
	{
		if (c == 'x' && n >= 10)
			ft_putchar(n + 'W');
		else if (c == 'X' && n >= 10)
			ft_putchar(n + '7');
		else
			ft_putchar(n + '0');
		return (1 + nbr);
	}	
	return (ft_putnbr_ultimate(n / base, base, c)
		+ ft_putnbr_ultimate(n % base, base, c) + nbr);
}
/*
#include <stdio.h>
int main(void)
{
	long long int nbr = -100;

	printf(" %d\n", ft_putnbr_ultimate(nbr, 10, '2'));
}
*/
