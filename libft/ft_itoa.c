/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:54:55 by chasling          #+#    #+#             */
/*   Updated: 2023/02/04 13:45:34 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_counter(long n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_itoa_itoa(long nbr, int i, char *p)
{
	while (nbr > 0)
	{
		p[i] = '0' + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		i;
	char	*p;

	nbr = n;
	i = 0;
	if (!n && n != 0)
		return (NULL);
	if (nbr < 0)
		i++;
	i = i + ft_counter(nbr);
	p = malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		p[0] = '-';
	}
	if (n == 0)
		p[0] = '0';
	p[i--] = '\0';
	p = ft_itoa_itoa(nbr, i, p);
	return (p);
}
/*
int main(void)
{
	long int n = -678;
	printf("Str: %s", ft_itoa(n));
}
*/
