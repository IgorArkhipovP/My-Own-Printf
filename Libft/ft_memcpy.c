/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:01:15 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/10/27 15:29:48 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*char_dst;
	unsigned char	*char_src;
	size_t			index;

	char_dst = (unsigned char *)dst;
	char_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	index = 0;
	while (index < n)
	{
		char_dst[index] = char_src[index];
		index++;
	}
	return (dst);
}
