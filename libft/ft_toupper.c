/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:43:18 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:16:12 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char var = '+';

	printf("%c --> %c", var, ft_toupper(var));

}
*/
