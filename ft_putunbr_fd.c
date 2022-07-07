/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 03:15:19 by ytouab            #+#    #+#             */
/*   Updated: 2021/10/31 23:51:44 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_fd(unsigned int n, int fd, size_t *ret, size_t *i)
{
	if (n > 9)
		ft_putunbr_fd(n / 10, fd, ret, i);
	ft_putchar_fd(n % 10 + 48, fd, ret);
	if (n < 10)
		*i = *i + 1;
}
