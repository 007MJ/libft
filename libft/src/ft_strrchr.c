/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:29:02 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/25 15:21:54 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	lght;

	i = 0;
	lght = ft_strlen(s);
	if (s[0] == '\0' && c != '\0')
		return (NULL);
	while (i < lght + 1)
	{
		if (s[lght - i] == (char )c)
		{
			return ((char *)s + lght - i);
		}
		i++;
	}
	return (NULL);
}
