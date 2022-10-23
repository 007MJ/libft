/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:28:32 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/21 14:45:28 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (dstsize != 0 && i != dstsize)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < dst)
	{
		dest[i] = '\0';
	}
	return (i);
}
