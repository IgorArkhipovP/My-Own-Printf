/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:23:16 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/10/27 15:41:53 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*char_dst;
	unsigned char	*char_src;
	size_t			index;

	char_dst = (unsigned char *)dst;
	char_src = (unsigned char *)src;
	index = 0;
	if (src > dst)
	{
		while (n > index)
		{
		char_dst[index] = char_src[index];
		index++;
		}
	}
	else if (src < dst)
	{
		while (n-- > 0)
			char_dst[n] = char_src[n];
	}
	return (dst);
}
