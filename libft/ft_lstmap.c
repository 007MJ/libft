/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:20:59 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/26 15:49:01 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	void	*nlst;

	new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		nlst = (*f)(lst->content);
		tmp = ft_lstnew(nlst);
		if (!tmp)
		{
			ft_lstclear(&tmp, del);
			free(nlst);
			return (new);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
