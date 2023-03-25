/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:56:25 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:23 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		len;
	int		i;

	len = ft_strlen(s);
	p = (char *)malloc(len * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		p[i] = s[i];
		i++;
	}
	return (p);
}
/*
int main(void)
{
	char str[] = "42 Vienna";
	char *cpy;
	char str2[] = "42 Vienna";
	char *cpy2;


	cpy = strdup(str);
	printf("(strdup) Copy of %s is: %s\n", str, cpy);

	cpy2 = ft_strdup(str2);
	printf("(ft_strdup) Copy of %s is: %s\n\n", str2, cpy2);

	if (strcmp(cpy, cpy2) == 0)
		printf("cpy and cpy2 are equal");
	else
		printf("cpy and cpy2 are NOT equal");
	free(cpy);
	free(cpy2);
}
*/
