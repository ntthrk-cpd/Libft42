/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:48:51 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/15 15:12:53 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*t;

	if (lst == NULL || f == NULL || del == NULL )
		return (NULL);
	result = NULL;
	while (lst)
	{
		t = ft_lstnw((*f)(lst->content));
		if (!t)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, t);
		t = t->next;
		lst = lst->next;
	}
	return (result);
}
