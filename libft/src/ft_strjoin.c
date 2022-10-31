/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:39:48 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/30 19:56:57 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	int		i;
	char	*c_s1;

	i = 0;
	c_s1 = (char *)s1;
	j = 0;
	while (s1[i])
	{
		c_s1[i] = s1[i];
		i++;
	}
	if (s2[j])
	{
		while (s2[j])
		{
			c_s1[i] = s2[j];
			i++;
			j++;
		}
	}
	if (ft_strlen(c_s1) <= ft_strlen(s2))
		ft_memmove((void *)c_s1, (void *)s2, ft_strlen(s2));
	c_s1[i] = '\0';
	return (ft_strdup(c_s1));
}
