/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 22:46:43 by ytouab            #+#    #+#             */
/*   Updated: 2021/11/01 00:55:54 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char c, size_t *ret, size_t *i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex(n / 16, c, ret, i);
	ft_putchar_fd(hex[n % 16], 1, ret);
	if (n < 16)
		*i = *i + 1;
}
