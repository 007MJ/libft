/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:28:32 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/18 20:35:10 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strcpy(char *restrict dest, const char *src)
{
	int	i;

	i = 0 ;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
