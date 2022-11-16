/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:39:48 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/31 10:48:32 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		lengh1;
	int		lengh2;
	char	*c_s1;

	lengh1 = ft_strlen(s1);
	lengh2 = ft_strlen(s2);
	c_s1 = malloc ((lengh1 + lengh2) + 1 * sizeof(*s1));
	if (!c_s1)
		return (NULL);
	ft_memmove((void *)c_s1, s1, lengh1);
	i = 0;
	while (i < lengh2)
	{
		c_s1[lengh1] = s2[i];
		i++;
		lengh1++;
	}
	c_s1[lengh1] = '\0';
	return (c_s1);
}
