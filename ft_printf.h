/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:14:50 by ytouab            #+#    #+#             */
/*   Updated: 2021/11/01 00:57:48 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_list
{
	va_list	ap;
	size_t	i;
	size_t	ret;
}	t_list;

int		ft_printf(const char *input, ...);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
void	ft_putunbr_fd(unsigned int n, int fd, size_t *ret, size_t *i);
void	ft_putnbr_fd(int n, int fd, size_t *ret, size_t *i);
void	ft_putstr_fd(char *s, int fd, size_t *ret, size_t *i);
void	ft_putchar_fd(char c, int fd, size_t *ret);
void	ft_putchar(char c, int fd, size_t *ret, size_t *i);
void	ft_puthex(unsigned int n, char c, size_t *ret, size_t *i);
void	ft_putptr(long long unsigned n, size_t *ret, int check, size_t *i);
void	ft_format(t_list *s, const char *ip);

#endif
