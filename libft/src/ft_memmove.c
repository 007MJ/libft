/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:01:41 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/24 18:18:51 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*csrc;
	char	*cdst;

	i = 0;
	csrc = (char *)src;
	cdst = (char *)dst;
	if (cdst > csrc)
	{
		while (len > 0)
		{
			cdst[len - 1] = csrc[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(cdst, csrc, len);
	}
	return (dst);
}
/*
int	main(void)
{
	char csrc[100] = "Geeksfor";
ft_memmove(csrc+5, csrc, strlen(csrc)+1);
printf("%s", csrc);
}*/
