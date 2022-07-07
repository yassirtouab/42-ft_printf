/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 02:24:40 by ytouab            #+#    #+#             */
/*   Updated: 2021/11/01 00:54:07 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(long long unsigned n, size_t *ret, int check, size_t *i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (!check)
	{
		ft_putchar_fd('0', 1, ret);
		ft_putchar_fd('x', 1, ret);
		check++;
	}
	if (n > 15)
		ft_putptr(n / 16, ret, check, i);
	ft_putchar_fd(hex[n % 16], 1, ret);
	if (n < 16)
		*i = *i + 1;
}
