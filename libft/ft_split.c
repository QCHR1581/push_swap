/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:25:38 by chasling          #+#    #+#             */
/*   Updated: 2023/01/31 10:15:15 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_counter(char const *s, char c)
{
	int	i;
	int	word_counter;
	int	s_len;

	i = 0;
	word_counter = 0;
	s_len = ft_strlen(s) - 1;
	while (s[s_len] == c)
		s_len--;
	while (s[i] == c)
		i++;
	while (i < s_len)
	{
		if (s[i] == c && s[i + 1] != c)
			word_counter++;
		i++;
	}
	if (i > s_len)
		return (word_counter);
	return (word_counter + 1);
}

static void	ft_free(char **aop, int z)
{
	while (z >= 0)
	{
		free(aop[z]);
		z--;
	}
	free(aop);
}

static char	**ft_split_split(char const *s, char c, char **aop)
{
	int	i;
	int	y;
	int	z;

	i = 0;
	y = 0;
	z = 0;
	while (s[i])
	{
		y = 1;
		if (s[i] != c)
		{
			while (s[i + y] != c && s[i + y])
				y++;
			aop[z] = ft_substr(s, i, y);
			if (aop[z++] == NULL)
			{
				ft_free(aop, z - 1);
				return (NULL);
			}
		}
		i = i + y;
	}
	aop[z] = NULL;
	return (aop);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**aop;

	if (!s)
		return (NULL);
	words = ft_word_counter(s, c);
	aop = (char **)malloc(sizeof(char *) * (words + 1));
	if (!aop)
		return (NULL);
	aop = ft_split_split(s, c, aop);
	if (!aop)
		return (NULL);
	return (aop);
}
/*
int main(void)
{
	char *s = "                          Hello";
	//char c = ' ';
	size_t i = 0;
	size_t words = ft_word_counter(s, ' ');
	char **p = ft_split(s, ' ');

	printf("\"%s\" has this many words: %ld\n\n", s, words);
	while (i < words)
	{
		printf("%ld. word: %s\n", i,  p[i]);
		i++;
	} 
}
*/
