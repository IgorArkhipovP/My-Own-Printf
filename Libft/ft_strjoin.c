/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:45:26 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/10/19 15:38:53 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	length1;
	size_t	length2;
	size_t	index;
	size_t	ix;

	index = 0;
	ix = 0;
	length1 = ft_strlen((char *)s1);
	length2 = ft_strlen((char *)s2);
	dest = (char *)malloc(sizeof(char) * (length1 + length2 + 1));
	if (!s1 || !s2)
		return (NULL);
	if (!dest)
		return (NULL);
	while (ix < length1)
		dest[index++] = s1[ix++];
	ix = 0;
	while (ix < length2)
		dest [index++] = s2[ix++];
	dest[index] = '\0';
	return (dest);
}
