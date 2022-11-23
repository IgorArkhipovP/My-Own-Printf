/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:22:08 by igorarhipov       #+#    #+#             */
/*   Updated: 2022/11/13 12:55:49 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "Libft/libft.h"

//ft_printf.c
int		ft_printf(const char *argput, ...);

//ft_printf_service - solution is based on Libft's functions
int		ft_print_char(va_list argput);
int		ft_print_string(va_list argput);
int		ft_print_deci_or_int(va_list argput);
int		ft_print_percent(void);

//ft_printf_unsigned
int		ft_print_unsigned(unsigned int n);

//ft_printf_hex
int		ft_print_hex(unsigned int n, const char format);

//ft_printf_ptr
int		ft_print_ptr(unsigned long long ptr);

#endif
