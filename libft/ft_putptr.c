/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:36:03 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:09 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_writeptr(unsigned long long n)
{
	int	count;

	count = 0;
	if (n < 16)
	{
		if (n >= 10)
			count += ft_putchar(n + 'W');
		else
			count += ft_putchar(n + '0');
		return (1);
	}
	return (count + ft_writeptr(n / 16) + ft_writeptr(n % 16));
}

int	ft_putptr(unsigned long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	return (count + ft_writeptr(n));
}
/*
int main(void)
{
	char a;
	//char **c = &b;
	unsigned long long nbr = (unsigned long long)&a;

	ft_putptr(nbr);
	printf("\n%i", ft_putptr(nbr));
	//printf("\n%p", b);
	//printf("\n%i", count);
}
*/
