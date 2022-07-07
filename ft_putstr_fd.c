/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 03:03:42 by ytouab            #+#    #+#             */
/*   Updated: 2021/11/01 10:59:59 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, size_t *ret, size_t *i)
{
	size_t	x;
	size_t	l;
	char	*nl;

	x = 0;
	*i = *i + 1;
	nl = "(null)";
	if (s == NULL)
	{
		while (x < 6)
			ft_putchar_fd(nl[x++], fd, ret);
		return ;
	}
	if (!s)
		return ;
	l = ft_strlen(s);
	while (x < l)
		ft_putchar_fd(s[x++], fd, ret);
}
