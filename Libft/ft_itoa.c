/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 08:54:43 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/10/29 17:13:01 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_size(int n)
{
	int	number;

	number = 0;
	while (n != 0)
	{
		n = n / 10;
		number++;
	}
	return (number);
}

// num[0] - count;
// num[1] - it handels negative numbers;

char	*ft_itoa(int n)
{
	int		num[2];
	char	*str;

	num[0] = ft_count_size(n);
	num[1] = 1;
	if (n < 0)
		num[1] = -1;
	num[0] = num[0] + (n <= 0);
	str = (char *)malloc(sizeof(char) * (num[0] + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	str[num[0]] = '\0';
	while (n != 0)
	{
		str[--num[0]] = (char)((n % 10) * num[1] + '0');
		n = n / 10;
	}
	if (num[1] < 0)
		str[--num[0]] = '-';
	return (str);
}
