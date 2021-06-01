/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:11:14 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/01 17:17:42 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
size_t	ft_strlcpy(char *dst, char const *src, size_t n);
char	*ft_strnstr(char *str1, char *str2, size_t n);
int		ft_strncmp(char *str1, char *str2, size_t n);
void	*ft_memmove(void *dst, void *src, size_t n);
int		ft_memcmp(void *str1, void *str2, size_t n);
size_t	ft_strlcat(char *dst, char *src, size_t n);
void	*ft_memcpy(void *dst, void *str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memchr(void *str, int c, size_t n);
void	*ft_calloc(size_t nitens, size_t size);
void	ft_putendl_fd(char *s, int fd);
void	ft_bzero(void *dst, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strrchr(char *str, int c);
char	*ft_strchr(char *str, int c);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strdup(char *str);
size_t	ft_strlen(char const *str);
int		ft_atoi(char *str);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
