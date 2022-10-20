/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:39:08 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/19 09:56:56 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	int		i;
	char	*csrc ;
	char	*cdest ;

	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	while (csrc[i] && i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
