/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:54:08 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/10/19 15:33:26 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			index;

	index = 0;
	str = (unsigned char *)s;
	while (index < n)
	{
		str[index] = (unsigned char)c;
		index++;
	}
	return (str);
}
