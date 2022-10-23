/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:01:41 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/22 18:01:48 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*int ii = 3;
while (ii)
{
	printf("%d - %d - %d\n", ii, --ii, ii);
}*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*csrc;
	char	*cdst;

	csrc = (char *)src;
	cdst = (char *)dst;
	if (!dst || !src)
		return (NULL);
	if (dst - src < len)
	{
		len = len - 1;
		while (len--)
			cdst[len] = csrc[len];
	}
	else
	{
		i = 0;
		while (len)
		{
			cdst[i] = csrc[i];
			len--;
			i++;
		}
	}
	return (dst);
}

int	main(void)
{
	char csrc[100] = "Geeksfor";
ft_memmove(csrc+5, csrc, strlen(csrc)+1);
printf("%s", csrc);
}
