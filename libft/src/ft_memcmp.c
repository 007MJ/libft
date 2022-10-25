/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:04:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/24 16:56:33 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*cs1;
	char	*cs2;
	size_t	i;

	i = 0;
	cs1 = (char *)s1;
	cs2 = (char *)s2;
	while (n != 0 && cs1[i] == cs2[i])
	{
		i++;
		n--;
	}
	return (cs1[i] - cs2[i]);
}
/*
int	main(void)
 {
      char str1[15];
   char str2[15];
   int ret;

   ft_memcpy(str1, "abcdef", 6);
   ft_memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
}*/
