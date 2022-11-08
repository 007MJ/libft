/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:15:18 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/08 14:27:28 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenghtint(long int n)
{
	long int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			taille;
	char		*str;
	long int	i;

	i = n;
	taille = lenghtint(n);
	str = malloc((taille + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[taille--] = '\0';
	if (i == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (i < 0)
		str[0] = '-';
	while (i != 0)
	{
		if (str[0] == '-' && i < 0)
			str[taille--] = '0' - (i % 10);
		else
			str[taille--] = '0' + (i % 10);
		i = i / 10;
	}
	return (str);
}
