/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:48:51 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/13 15:17:57 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inclue "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	
	new_list = (t_list *)malloc(sizeof(t_list));
	while (lst->next != NULL)
	{
		new_list = f(lst->content);
		if (!new_list)
			free(new_list);
		del(lst->content);
		lst = new_list->next;
	}
	return (new_list);
}
