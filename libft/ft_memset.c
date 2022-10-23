/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:05:06 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/21 13:44:09 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*cb;
	unsigned char	cc;

	i = 0;
	cb = (unsigned char *)b;
	cc = (unsigned int *)c;
	while (i < n)
	{
		cb[i] = c;
		i++;
	}
	return (b);
}
