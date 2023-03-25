/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chasling <chasling@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:55:10 by chasling          #+#    #+#             */
/*   Updated: 2023/03/20 10:59:10 by chasling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <stdint.h>
# include <fcntl.h> 
# include <stdarg.h>
# include <limits.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif
# define LIBFT_H

int		ft_atoi( const char *nptr);
int		ft_isalpha(int c);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strrchr(const char *S, int c);
void	ft_bzero(void *s, size_t n);
int		ft_isascii(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isdigit(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_toupper(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dst, const char *sr, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*get_next_line(int fd);
size_t	my_strlen(const char *s);
char	*my_strchr(const char *s, int c);
size_t	my_strlcpy(char *dst, const char *src, size_t size);
char	*my_strjoin(const char *s1, const char *s2);
size_t	my_strlcat(char *dst, const char *src, size_t size);
void	*my_calloc(size_t nmemb, size_t size);
int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr_unsigned(long unsigned int n);
int		ft_putnbr_ultimate(long long n, long long base, char c);
int		ft_putptr(unsigned long long nbr);
#endif
