/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:15:18 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/09 13:29:11 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenghtint(int n)
{
	int	i;

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

	taille = lenghtint(n);
	str = malloc((taille + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[taille--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		if (str[0] == '-' && n < 0)
			str[taille--] = '0' - (n % 10);
		else
			str[taille--] = '0' + (n % 10);
		n = n / 10;
	}
	return (str);
}
