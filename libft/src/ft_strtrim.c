/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:57:20 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/01 14:33:44 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkinset(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
		{
			return (1);
		}
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		left;
	size_t		right;
	char		*newstr;
	size_t		i;

	left = 0;
	i = 0;
	while (s1[left] && checkinset(s1[left], set) == 1)
		left++;
	right = ft_strlen(s1);
	while (left < right && checkinset(s1[right - 1], set) == 1)
		right--;
	newstr = (char *)malloc ((right - left + 1) * sizeof(*s1));
	if (!newstr)
		return (NULL);
	while (left < right)
	{
		newstr[i] = s1[left];
		i++;
		left++;
	}
	newstr[i] = '\0';
	return (newstr);
}
