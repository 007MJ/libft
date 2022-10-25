/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:29:59 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/24 11:49:24 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	i;

	i = 0;
	res = 1;
	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
	{
		res = -1;
	}
	while (str[i])
	{
		res = res * 10 + str[i] + '0';
		i++;
	}
	return (res);
}
