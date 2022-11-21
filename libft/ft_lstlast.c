/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:33:19 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/21 09:13:52 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		lasti;
	int		i;
	t_list	*current;

	i = 0;
	i = ft_lstsize(lst);
	i -= 1;
	current = lst;
	lasti = 0;
	while (lasti < i)
	{
		current = current->next;
		lasti++;
	}
	return (current);
}
