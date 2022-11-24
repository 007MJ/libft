/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:39:08 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/24 10:22:15 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*csrc ;
	char	*cdest ;

	csrc = (char *)src;
	cdest = (char *)dst;
	i = 0;
	if (dst == 0 && src == 0)
	{
		return (0);
	}
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char csrc[] = "bonjour";
char cdest[100];
ft_memcpy(cdest, csrc, 5);
memcpy(cdest, csrc, 5);
printf("Copied string is %s\n", cdest);
printf("Copied of the real memcpy %s\n", cdest);

return 0;
}*/
