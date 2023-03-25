/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:30:59 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:14:53 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_chr(char c, va_list args)
{
	char	b;

	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr_ultimate(va_arg(args, int), 10, 2));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (c == 'X' || c == 'x')
		return (ft_putnbr_ultimate(va_arg(args, unsigned int), 16, c));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, unsigned long long)));
	else if (c == '%')
		return (write(1, "%", 1));
	else if (c == 'c')
	{
		b = va_arg(args, int);
		return (write(1, &b, 1));
	}
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		control;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		control = count;
		if (*str == '%')
			count += check_chr(*(++str), args);
		else
			count += write(1, str, 1);
		if (control > count)
			return (-1);
		str++;
	}
	va_end(args);
	return (count);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "Hello World";
	//char c = 'a';
	//int nbr = 802345;
	//int nbr2 = 10;
	//int  count = 0;

	ft_printf("This is a string: \"%s\" and this too: \"%s\"", str, str);
	//ft_printf("ft_prinft: %i", ft_printf("\nThat is a 
	//%%p char: \"%c\".\nThis is a string: \"%s\".\n\n", c, str));
	//printf("prinft: %i", printf("\nThat is a %%p char: 
	//\"%c\".\nThis is a string: \"%s\".\n\n", c, str));
	//ft_printf(" ft_printf: %i ", ft_printf("%%% "));
	//ft_printf("\nft_printf: %d ", ft_printf("%z"));
	//ft_printf("\nThe number: \"%i\" is in lower hex: \"%x\" 
	//and in upper hex: \"%X\".\n\n", nbr, nbr, nbr);
	//ft_printf("There is a chance of 0,01%% that we win.\n\n");
	//printf(" %d", printf("This is a pointer: \"%p\".\n", NULL));
	//ft_printf("%d", ft_printf("This is a pointer: \"%p\".\n", NULL));
	//ft_printf("\nThis is the count \"%i\" of \"%s\"", count, str);
	//ft_printf(" %d", ft_printf("%%%"));
	//ft_printf("\n");
	//printf("%i", printf("Hello %h world"));
	//printf("\n");
	//printf("%x", nbr);
	//printf("\n");
	//printf("%i", printf("Hello %h  "));
	//printf("\n");
	//ft_printf("%i", ft_printf("%c", ''));
}
*/
