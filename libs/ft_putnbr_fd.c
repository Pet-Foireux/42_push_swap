/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:00:03 by mpapin            #+#    #+#             */
/*   Updated: 2025/01/25 17:05:11 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

static void	print_nb(long nb, int fd)
{
	if (nb / 10)
	{
		print_nb(nb / 10, fd);
		print_nb(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	print_nb(nb, fd);
}
