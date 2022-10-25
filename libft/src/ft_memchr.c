/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:11:07 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/24 14:50:35 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cs;

	cs = (unsigned char *)s;
	i = 0;
	while (i <= n && n != 0)
	{
		if (cs[i] == c)
		{
			return (cs + i);
		}
		i++;
	}
	return (0);
}
/*
int main ()
{
    char str[] = "http://www.tutorialspoint.com";
    char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, ft_strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
