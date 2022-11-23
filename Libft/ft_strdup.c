/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:42:08 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/10/27 15:13:34 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s1)
{
	char	*dest;
	size_t	length;
	size_t	ix;

	ix = 0;
	length = ft_strlen((char *)s1);
	dest = (char *)malloc(sizeof(char) * (length + 1));
	if (!dest)
		return (NULL);
	while (ix < length)
		dest[ix++] = *s1++;
	dest[ix] = '\0';
	return (dest);
}
