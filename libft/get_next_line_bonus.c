/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:24:42 by chasling          #+#    #+#             */
/*   Updated: 2023/03/14 15:52:03 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*free_ultimate(char *free_one, char *free_two)
{
	if (free_one)
		free (free_one);
	if (free_two)
		free (free_two);
	return (NULL);
}

char	*get_new_line(int fd, char *buffer, char *str)
{
	int			red;
	char		*temp;

	if (!str)
		str = (char *)my_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!str)
		return (NULL);
	red = 1;
	while (!my_strchr(str, '\n') && red > 0)
	{
		red = read(fd, buffer, BUFFER_SIZE);
		if ((red == 0 && !*str))
			return (free_ultimate(buffer, str));
		temp = str;
		str = my_strjoin(temp, buffer);
		if (!str)
			return (free_ultimate(temp, buffer));
		free_ultimate(temp, buffer);
		buffer = (char *)my_calloc(BUFFER_SIZE + 1, sizeof(char));
		if (!buffer)
			return (NULL);
	}
	free(buffer);
	return (str);
}

char	*get_final_line(char *str)
{
	size_t	len;
	char	*end;
	char	*fstr;

	end = my_strchr(str, '\n');
	if (!end)
		len = my_strlen(str) + 1;
	else
		len = (end - str) + 2;
	fstr = (char *)my_calloc(len, sizeof(char));
	if (!fstr)
		return (NULL);
	my_strlcpy(fstr, str, len);
	return (fstr);
}

char	*get_new_str(char *str)
{
	char	*end;
	char	*temp;

	end = my_strchr(str, '\n');
	if (!end)
		return (NULL);
	temp = my_strjoin("", end + 1);
	if (!temp)
		return (NULL);
	return (temp);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*str[2000];
	char		*fstr;
	char		*temp;

	if (read(fd, str[fd], 0) < 0 || BUFFER_SIZE <= 0)
	{
		if (str[fd])
			free (str[fd]);
		return (str[fd] = NULL);
	}
	buffer = (char *)my_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	temp = get_new_line(fd, buffer, str[fd]);
	if (!temp)
		return (str[fd] = NULL);
	fstr = get_final_line(temp);
	str[fd] = get_new_str(temp);
	free(temp);
	if (!*fstr)
		return (free_ultimate(fstr, str[fd]));
	return (fstr);
}
/*
int main(void)
{
	int	fd;
	int	fd2;
	int	fd3;
	char *str;

	fd = open("test.txt", O_RDONLY);	

	if (fd == -1)
		printf("Error");

	str = get_next_line(fd);
	printf("%s", str);
	free(str);

	fd2 = open("test3.txt", O_RDONLY);	

	if (fd2 == -1)
		printf("Error");

	str = get_next_line(fd2);
	printf("%s", str);
	free(str);

	fd3 = open("test4.txt", O_RDONLY);	

	if (fd3 == -1)
		printf("Error");

	str = get_next_line(fd3);
	printf("%s", str);
	free(str);

	if (fd == -1)
		printf("Error");

	str = get_next_line(fd);
	printf("%s", str);
	free(str);

	if (fd2 == -1)
		printf("Error");

	str = get_next_line(fd2);
	printf("%s", str);
	free(str);

	close(fd);
	close(fd2);
	close(fd3);

	return (0);
}
*/
