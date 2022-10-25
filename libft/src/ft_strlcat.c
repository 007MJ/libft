/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:42:13 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/24 15:04:49 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index_a;
	size_t	index_b;
	char	*s;

	s = (char *)src;
	index_a = 0;
	index_b = 0;
	while (index_a < dstsize && *dst)
	{
		dst++;
		index_a++;
	}
	if (index_a == dstsize)
		return (index_a + ft_strlen(src));
	while (s[index_b])
	{
		if (index_b < dstsize - index_a - 1)
			*dst++ = s[index_b];
			index_b++;
	}
	*dst = 0;
	return (index_a + index_b);
}
