/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:04:07 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:16:01 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_left(char const *s1, char const *set)
{
	int	x_left;
	int	y_left;

	x_left = 0;
	y_left = 0;
	while (set[y_left])
	{
		if (s1[x_left] == set[y_left] && set[y_left])
		{
			x_left++;
			y_left = -1;
		}
		y_left++;
	}
	return (x_left);
}

static int	ft_right(char const *s1, char const *set)
{
	int	x_right;
	int	y_right;

	y_right = 0;
	x_right = ft_strlen(s1) - 1;
	while (set[y_right])
	{
		if (s1[x_right] == set[y_right] && set[y_right] && x_right != 0)
		{
			x_right--;
			y_right = -1;
		}
		y_right++;
	}
	return (x_right);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		x_right;
	int		x_left;
	char	*p;
	int		i;

	if (!s1 || !set)
		return (NULL);
	x_left = ft_left(s1, set);
	x_right = ft_right(s1, set);
	if (s1[0] == '\0' || x_left > x_right)
		p = malloc(1);
	else if (x_left <= x_right)
		p = malloc((x_right - x_left) + 2);
	else
		return ("\0");
	if (!p)
		return (NULL);
	i = 0;
	while (x_left <= x_right)
	{
		p[i++] = s1[x_left];
		x_left++;
	}
	p[i] = '\0';
	return (p);
}
/*
int main(void)
{
    char s1[] = "aaaaHello Worldxlaaaa";
    char set[] = "a";
    char *p = ft_strtrim(s1, set);

    printf("Trim of \"%s\" with set \"%s\" is: %s\n", s1, set, p);
   	if (!strcmp("", p))
        printf("Equal!");
    else 
        printf("Not equal!");
}
*/
