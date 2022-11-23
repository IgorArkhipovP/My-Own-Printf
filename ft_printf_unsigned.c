/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:28:44 by igorarhipov       #+#    #+#             */
/*   Updated: 2022/11/13 12:54:25 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_uns_fd(unsigned int n, int fd)
{
	if (n <= 9)
	{
		ft_putchar_fd(n + '0', fd);
	}
	else
	{
		ft_putnbr_uns_fd(n / 10, fd);
		ft_putnbr_uns_fd(n % 10, fd);
	}
}

static int	ft_size_unsigned(unsigned int n)
{
	int	number;

	if (n == 0)
		return (1);
	number = 0;
	while (n != 0)
	{
		n = n / 10;
		number++;
	}
	return (number);
}

int	ft_print_unsigned(unsigned int n)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_putnbr_uns_fd(n, 1);
	return (ft_size_unsigned(n));
}
