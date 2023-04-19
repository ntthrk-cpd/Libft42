/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheepan <ncheepan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:02:44 by ncheepan          #+#    #+#             */
/*   Updated: 2023/04/19 01:05:51 by ncheepan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;

	char_dest = (char *)dest;
	char_src = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	if (char_dest > char_src)
	{	
		char_dest += n;
		char_src += n;
		while (n--)
			*--char_dest = *--char_src;
	}
	else
	{
		while (n--)
			*char_dest++ = *char_src++;
	}
	return ((void *)dest);
}
