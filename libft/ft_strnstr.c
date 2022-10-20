/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:33:20 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/19 18:43:19 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strnstr(const char *haystack, const char *needle, size_t len)
{
	int	j;
	int	i;

	i = 0;
	if (needle[0] == 0)
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[i + j] == 0 && i <= len)
		{
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
		return (0);
	}


}
