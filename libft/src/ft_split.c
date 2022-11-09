/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:34:07 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/09 18:15:27 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrworld(char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (str[i -1] != c)
			{
				word++;
			}
		}
		i++;
	}
	return (word);
}

static **yig(char const *s, char c, int word)
{
	  int i;
  int star;
  int len;
  i = 0;
  star = 0;
  len = 0;
  while (s[i])
  {
    if (s[i] != c)
    {
      star = i;
    }
    if (s[i] != c && s[i -1] != c)
        len++;

    i++;
  }
}

char **ft_split(const char *s, char c)
{

}
