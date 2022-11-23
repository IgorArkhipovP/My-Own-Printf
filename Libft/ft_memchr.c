/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:05:01 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/10/19 15:20:18 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;

	arr = (unsigned char *)s;
	while (n--)
	{
		if (*arr == (unsigned char)c)
		{
			return (arr);
		}
		arr++;
	}
	return (NULL);
}
