/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:01:41 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/19 09:56:49 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
{
	iny		i;
	char	cdest;
	char	csrc;

	i = 0;
	csrc = (char *)dest;
	cdest = (char *)csrc;
	while (csrc[i] && i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}
