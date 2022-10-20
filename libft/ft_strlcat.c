/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:42:13 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/19 19:58:22 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strlcat(char *restrict dest, const char *restrict src, size_t n)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
