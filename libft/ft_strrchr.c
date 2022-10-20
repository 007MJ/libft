/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:29:02 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/19 10:40:38 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int	lght;

	lght = 0;
	while (s[i])
	{
		lght++;
	}

	lght -1;
	while (s[lght])
	{
		if (lght == c)
		{
			return (s + lght);
		}
		lght --;
	}
	return (0);
}
