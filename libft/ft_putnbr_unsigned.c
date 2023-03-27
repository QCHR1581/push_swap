/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:36:03 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:07 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_unsigned(unsigned long int n)
{
	if (n < 10)
	{
		ft_putchar(n + '0');
		return (1);
	}
	return (ft_putnbr_unsigned(n / 10) + ft_putnbr_unsigned(n % 10));
}
/*
int main(void)
{
	int nbr = -1;
	int count;

	count = ft_putnbr_unsigned(nbr);
	printf("\n%u", nbr);
	printf("\n%i", count);
}
*/
