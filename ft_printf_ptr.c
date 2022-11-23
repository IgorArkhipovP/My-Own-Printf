/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:56 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/11/12 20:35:50 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size_ptr(unsigned long long n)
{
	int	length;

	length = 0;
	while (n != 0)
	{
		length++;
		n = n / 16;
	}
	return (length);
}

static void	ft_put_ptr(unsigned long long n)
{
	if (n >= 16)
	{
		ft_put_ptr(n / 16);
		ft_put_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	total_count;

	total_count = 0;
	total_count += write(1, "0x", 2);
	if (ptr == 0)
		total_count += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		total_count += ft_size_ptr(ptr);
	}
	return (total_count);
}
