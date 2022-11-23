/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_service.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:06:51 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/11/13 12:54:52 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(va_list argput)
{
	char	char_print;

	char_print = va_arg(argput, int);
	ft_putchar_fd(char_print, 1);
	return (1);
}

int	ft_print_string(va_list argput)
{
	char	*string_print;
	int		count;

	count = 0;
	string_print = va_arg(argput, char *);
	if (string_print == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	count = ft_strlen(string_print);
	ft_putstr_fd(string_print, 1);
	return (count);
}

int	ft_print_deci_or_int(va_list argput)
{
	char	*number_print;
	int		count;

	count = 0;
	number_print = ft_itoa(va_arg(argput, int));
	count = ft_strlen(number_print);
	ft_putstr_fd(number_print, 1);
	free(number_print);
	return (count);
}

int	ft_print_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
