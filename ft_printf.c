/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:17:23 by igorarhipov       #+#    #+#             */
/*   Updated: 2022/11/14 17:50:18 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	total_count_character(char current_char)
{
	ft_putchar_fd(current_char, 1);
	return (1);
}

static int	ft_add_symbol(va_list argput, const char type)
{
	if (type == 'c')
		return (ft_print_char(argput));
	else if (type == 's')
		return (ft_print_string(argput));
	else if (type == 'p')
		return (ft_print_ptr(va_arg(argput, unsigned long long)));
	else if (type == 'd' || type == 'i')
		return (ft_print_deci_or_int(argput));
	else if (type == 'u')
		return (ft_print_unsigned(va_arg(argput, unsigned int)));
	else if (type == 'x' || type == 'X')
		return (ft_print_hex(va_arg(argput, unsigned int), type));
	else if (type == '%')
		return (ft_print_percent());
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	argput;
	int		total_count;

	i = 0;
	total_count = 0;
	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);
	va_start(argput, format);
	while (format[i])
	{
		if (format[i] == '%' )
		{
			total_count += ft_add_symbol(argput, format[i + 1]);
			i++;
		}
		else
			total_count += total_count_character(format[i]);
		i++;
	}
	va_end(argput);
	return (total_count);
}
