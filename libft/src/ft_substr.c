/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:20:40 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/10 10:36:34 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (start < ft_strlen(s))
		while (i < len && s[start + i])
				i++;
	ptr = malloc((i + 1) * sizeof(*s));
	if (!ptr)
		return (ptr);
	i = 0;
	if (start <= ft_strlen(s))
	{
		while (s[start] != '\0' && i < len)
		{
			ptr[i] = s[start];
			start++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
