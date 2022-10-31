/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:57:20 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/31 18:26:54 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	lefti(char *s1, char const *set)
{
	int	i;

	i = 0;
	//rendu check a l'interieur !
	while (s1[i])
	{
		i++;
	}
	return (i);
}

static	int	righti(char *s1, char const *set)
{
	int	j;
	int	i;

	i = ft_strlen(s1);
	i = i - 1;
	j = 0;
	while (s1[i] == set[j])
	{
		i--;
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		i;
	char	*newstr;
	int		lenghs1;

	lenghs1 = ft_strlen(s1);
	j = 0;
	newstr = malloc ((lenghs1 + 1) * sizeof(s1));
	if (!newstr)
		return (NULL);
	i = lefti((char *)s1, set);
	lenghs1 = righti((char *)s1, set);
	while (j <= s1[lenghs1])
	{
		newstr[j] = s1[i];
		j++;
		i++;
	}
	newstr[j] = '\0';
	return (newstr);
}
